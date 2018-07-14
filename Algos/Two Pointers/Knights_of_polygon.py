n,k = [int(i) for i in raw_input().split()]
p = [int(i) for i in raw_input().split()]
c = [int(i) for i in raw_input().split()]
num = 1
store = []
for i in range(n):
    store.append([p[i],num,c[i]])
    num+=1

store = sorted(store, key = lambda x: x[2])
arr = []
for i in store:
    arr.append(i[:])

for i in range(n):
    s = k
    if k!= 0:
        for j in range(n-1,-1,-1):
            if s==0:
                break
            if store[i][0] > store[j][0]:
                arr[i][2]+=store[j][2]
                s-=1


arr = sorted(arr, key= lambda x: x[1])
ans = [str(i[2]) for i in store]
print " ".join(ans)
