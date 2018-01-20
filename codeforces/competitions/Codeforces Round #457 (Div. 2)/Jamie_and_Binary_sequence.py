power = {}
c = 1
for i in range(0,60):
	power[i]=c
	c*=2
c=0.5
for i in range(-1,-70,-1):
	power[i]=c
	c/=2.0
flag = 0
n,k = raw_input().split()
n=int(n)
k=int(k)
p = n
q = k
orig = 59
ctr = 59
res = []
while n>0:
	if(n>=power[ctr]):
		n-=power[ctr]
		k-=1
		res.append(ctr)
	else:
		ctr-=1
	if(n==0 and k!=0):
		n=p
		k=q
		res=[]
		orig-=1
		ctr = orig

print sorted(res,reverse = True)

