def fib():
    a=0
    b=1
    fa=[]
    fa.append(0)
    while(b<10**5):
        a,b=b,a+b
        fa.append(b)
    return fa
list1=fib()
print(len(list1))
list2=[]
for i in list1:
    a=sorted(str(i))
    list2.append(a)
print(list2)
print(list1)

N=376
a=sorted(str(N))
if a in list2:
    print("possible")
else:
    print("not possible")
print "Hello World!\n"
