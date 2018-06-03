n = int(raw_input())
a = []
while(n>0):
    a.append(raw_input())
    n-=1
a.sort(lambda x,y: cmp(len(x), len(y)))
flag =1
for i in range(len(a)-1):
    if a[i] not in a[i+1]:
       flag = 0
       break

if flag==0:
    print "NO"
else:
    print "YES"
    for i in a:
        print i 