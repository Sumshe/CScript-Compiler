import copy
from pptree import *
import chain

"""
def count_children(s):
    count = 0
    for i in s[1:]:
        if i in ['main', 'S', 'COND', 'rel_op', 'E', 'T', 'F']:
            count += 1
    return count

r_count = []
for i in t2:
    r_count.append(count_children(i))
"""

file = open('./../IR/parse.log', 'r')
s = file.read()
s = s.split('\n')
s.reverse()
s = s[:-1]
t = []
for i in s:
    j = i.split()
    j.remove('=')
    t.append(j)

t

tokens = reduce(lambda x,y :x+y ,t)
tokens = list(set(tokens))

count = []
for i in range(0, (len(t) - 1)):
    if (len(t[i]) == 2) and (t[i][1] == t[i + 1][0]):
        t[i + 1][0] = t[i][0]
        count.append(i)

t2 = []
for i in range(0,len(t)):
    if i not in count:
        t2.append(t[i])

t2.insert(0, ['Start', 'main'])
del t2[1][0]

count = []
t3 = t2[2:]
t3.reverse()
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

t4 = []
for i in range(0,len(t3)):
    if i not in count:
        t4.append(t3[i])
t4.reverse()
t4.insert(0,t2[1])
t4.insert(0,t2[0])


terminals = ['+','-','*','/','=','ifelse','<LT>','<GT>','dowhile','<++>']

nodes = tokens
table = []
extend = []
for i in range(1,1000):
    table.append('')
for i in nodes:
    extend.append(0)

nonempt = ['E','T','F','S']

def hash_token(token):
        i = nodes.index(token)
        #return i
        extend[i] += 1
        return i+(len(nodes)*(extend[i]))

def get_token(token):
        i = nodes.index(token)
        r = i+(len(nodes)*(extend[i]))
        if nodes[i] not in nonempt:
            extend[i] -= 1
        return r

namespace = []
for i in range(1,1000):
    namespace.append('')

for i in t4:
    #print i
    p = get_token(i[0])
    #print "\t",i[0],": Parent = ",p
    for j in i[1:]:
        c = hash_token(j)
        #print '\t',j,':',c,':',p
        if(j[0]=='S'):
            j = ''
        if((j in terminals)and (j!='\xce\xb5')):
            namespace[p] = j
        else:
            namespace[c] = j



table = []
extend = []

ignore = ['\xce\xb5']

for i in range(1,1000):
    table.append('')
for i in nodes:
    extend.append(0)

table[nodes.index('Start')] = Node("Start")
for i in t4:
    p = get_token(i[0])
    #print "\t",i[0],": Parent = ",p
    for j in i[1:]:
        c = hash_token(j)
        #print '\t',j,':',c,':',p
        if((j not in terminals)and(j not in ignore)):
            table[c] = Node(namespace[c],table[p])
print ('')

print_tree(table[nodes.index('Start')],nameattr='name',indent = '\t\t',last = 'updown')
