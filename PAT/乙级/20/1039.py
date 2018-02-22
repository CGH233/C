str1=input()
str2=input()
list1=[]
list2=[]
list1=list(str1)
list2=list(str2)
len1,len2=len(list1),len(list2)
cout=0
for i in range(len2):
    try:
        c=list1.index(list2[i])
        list1.remove(list2[i])
    except ValueError:
        cout+=1
        continue
if cout!=0:
    print("No %d" % cout)
else:
    print("Yes %d" % len(list1))
