#coding:utf-8
a,b = raw_input(),raw_input()
c = [i.upper() for i in a if i not in b]
print("".join(sorted(list(set(c)),key = c.index)))
