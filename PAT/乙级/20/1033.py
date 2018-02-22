#coding:utf-8
lack,data=raw_input(),raw_input()
out=''
for i in data:
    if i.upper() not in lack:
        if '+' in lack and i.isupper():
            continue
        else:
            out+=i
print out

