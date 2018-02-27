def nextCallatz(n):
    if n%2 == 0:
        return n/2
    else:
        return (3*n+1)/2

n = input()
data = raw_input().split()
data = map(int, data)
rlt = data[:]
for num in data:
    while num != 1:
        num = nextCallatz(num)
        if num in rlt:
            rlt.remove(num)
rlt.sort(reverse = True)
rlt = map(str, rlt)
print(' '.join(rlt))
