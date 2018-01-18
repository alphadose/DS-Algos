t= int(raw_input())
while t>0:
	n=int(raw_input())
	d=[int(i) for i in raw_input().split()]
	print len(set(d))
	t-=1