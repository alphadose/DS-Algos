n = int(raw_input())
while n>0:
	s = raw_input()
	a= len(s)
	if a>10:
		out = s[0]+str(a-2)+s[-1]
	else:
		out = s
	print out
	n-=1