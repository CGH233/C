#coding:utf-8
N = int(input())
m = 0
while (m != 1):
    a = N / 1000
    b = (N - a * 1000) / 100
    c = (N - a * 1000 - b * 100) / 10
    d = N - a * 1000 - b * 100 - c * 10
    if (a == b and b == c and c == d):
        print('%d - %d = 0000') %(N,N)
        m = 1
    n = [a,b,c,d]
    n.sort()
    e = 0
    x = 0
    k = 0
    for i in n:
        x += i * (10**e)
        e += 1
        if (i == 0):
            k += 1
    e = 0
    y = 0
    for i in n[::-1]:
        y += i * (10**e)
        e += 1
    N = x - y
    if (k == 0 and m != 1): 
        print('%d - %d = %d') %(x,y,N)
    else:
        if (m != 1 and k == 1):
            print('%d - 0%d = %d') %(x,y,N)
        elif (k == 2):
            print('%d - 00%d = %d') %(x,y,N)
        elif (k == 3):
            print('%d - 000%d = %d') %(x,y,N)
    if (N == 6174):
        m = 1
