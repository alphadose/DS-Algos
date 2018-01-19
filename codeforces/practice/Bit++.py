n = int(raw_input())
x=0
while(n>0):
	s=raw_input()
	x+= 1 if "++" in s else -1
	n-=1

print x