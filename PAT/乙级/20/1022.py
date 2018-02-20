#coding:utf-8
a,b,d = raw_input().split()
L = []
s = ''
a = int(a); b = int(b); d = int(d)
n = a + b
if n == 0:
    print(0)
while n != 0:
    L.append(n % d)
    n //= d
for i in range(len(L)):
    s += str(L.pop())
print int(s)
