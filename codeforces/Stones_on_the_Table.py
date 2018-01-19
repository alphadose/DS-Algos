n = int(raw_input())
s = [i for i in raw_input()]
c = 0
i = 0
while i < len(s)-1:
	if s[i]==s[i+1]:
		s.pop(i+1)
		c+=1
	else:
		i+=1

print c