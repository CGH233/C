#coding:utf-8
#罪过罪过
a = raw_input()
b = []
c = 0
for x in a:
    if x == ' ':
        c = c + 1
for x in a.split(' ',c):
    b.append(x)
for k in b[::-1]:
    print(k),
