import copy
from pptree import *
import chain


file = open('./irc.3ac', 'r')
s = file.read()
s = s.split('\n')
s = s[:-1]
t = []

ignore = []
for i in s:
    if i == '':
        s.remove(i)
for i in s:
    j = i.split()
    if '=' in j:
        j.remove('=')
    else:
        ignore.append(s.index(i))
    t.append(j)

tokens = reduce(lambda x,y :x+y ,t)
tokens = list(set(tokens))

tokens

count = []
for i in range(0, (len(t) - 1)):
    if i not in ignore:
        # print t[i]
        if (len(t[i]) == 2) and (t[i][1] == t[i + 1][0]):
            t[i + 1][0] = t[i][0]
            count.append(i)

t2 = []
for i in range(0,len(t)):
    if i not in count:
        t2.append(t[i])

count = []
t3 = copy.deepcopy(t2)

for i in range(0,len(t3)):
    if i not in ignore:
        query = t3[i][0]
        if len(t3[i])==2:
            bf = 0
            for j in range(i+1,len(t3)):
                a = t3[j][1:]
                pick = []
                for mem in a:
                    pick.insert(0,mem)
                for k in range(0,len(pick)):
                    if pick[k]==query:
                        pick[k] = t3[i][1]
                        count.append(i)
                        bf = 1
                        break
                head = t3[j][0]
                t3[j] = pick
                t3[j].insert(0,head)
                if bf==1:
                    break

for i in ignore:
    q = copy.deepcopy(t3[i][1:])
    # print q
    r = []
    for j in range(0,len(q)):
        r.append(q[-1])
        q.pop()
    q = r
    # print r
    q.insert(0,t3[i][0])
    t3[i] = q


t4 = []
for i in range(0,len(t3)):
    if i not in count:
        t4.append(t3[i])



for i in t4:
    s = i[0]
    if ((s[0] != 'L')and(s[:7]!='ifFalse')and(s[:2]!='if')and(s[:4]!='goto')):
        s+=' ='
    for j in i[1:]:
        s += ' '+j
    print s
