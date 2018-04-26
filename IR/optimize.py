import copy
from pptree import *
import chain


file = open('/home/ako/cdp/Compiler/IR/irc.3ac', 'r')
s = file.read()
s = s.split('\n')
s = s[:-1]
t = []
s
for i in s:
    j = i.split()
    j.remove('=')
    t.append(j)

t

tokens = reduce(lambda x,y :x+y ,t)
tokens = list(set(tokens))

tokens

count = []
for i in range(0, (len(t) - 1)):
    if (len(t[i]) == 2) and (t[i][1] == t[i + 1][0]):
        t[i + 1][0] = t[i][0]
        count.append(i)
t

t2 = []
for i in range(0,len(t)):
    if i not in count:
        t2.append(t[i])

t2

count = []
t3 = t2
for i in range(0,len(t3)):
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

t3
t4 = []
for i in range(0,len(t3)):
    if i not in count:
        t4.append(t3[i])

for i in t4:
    s = i[0]+' = '
    for j in i[1:]:
        s += j
    print s
