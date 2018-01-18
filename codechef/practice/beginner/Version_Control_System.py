t=int(raw_input())
while(t>0):
	mkn=[int(i) for i in raw_input().split()]
	a = [int(i) for i in raw_input().split()]
	b = [int(i) for i in raw_input().split()]
	p = 0
	q = 0
	for i in range(1,mkn[0]+1):
		if i in a and i in b:
			p+=1
		if i not in a and i not in b:
			q+=1
	print p,q
	t-=1