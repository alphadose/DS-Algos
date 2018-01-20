n = int(raw_input())
t = [int(i) for i in raw_input().split()]
c=0
while "7" not in ":".join([str(t[0]),str(t[1])]):
	t[1]-=n
	if t[1]<0:
		t[0]-=1
		t[1]+=60
	if t[0]<0:
		t[0]+=24
	c+=1
print c