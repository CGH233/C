#coding:utf-8
N,p = map(int,input().split())
l = input()
a = map(int,l.split())
b = sorted(a)
for x in b[1:]:
    if (b[0] * p) >= x:
        M = x
        m = b[0]
        Mp = b.index(M)
        mp = b.index(m)
        max = Mp - mp 
for x in range(1,(len(b) - 1)):
    if (Mp < len(b)):
        while ((b[x] * p) >= b[Mp]) and (Mp < len(b) - 1):
            Mp += 1
        if (Mp - x) > max:
            max = Mp - x                                    
print(max)
