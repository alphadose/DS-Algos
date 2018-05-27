n,q = [int(i) for i in raw_input().split()]

arr = [set([]) for i in range(n)]
ans = [0 for i in range(n)]

while(q>0):
    input_set = [int(i) for i in raw_input().split()]
    length=0
    if input_set[0]==1:
        l,r,x = input_set[1:]
        for cat in range(l,r+1):
            if x in arr[cat-1]:
                ans[cat-1]*=2
            else:
                arr[cat-1].add(x)
                ans[cat-1]+=1
    if input_set[0]==2:
        l,r = input_set[1:]
        for cat in range(l,r+1):
            length = length+ans[cat-1]%998244353
        print length%998244353
    q-=1