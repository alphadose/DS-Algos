s = raw_input()
stack = []
ctr = 0
ctr2 = 0
for i in range(len(s)):
	stack = []
	s2 = s[i:]
	for j in s2:
		if j=="?":
			if(stack[-1]=="?"):
				if len(stack)>0:
					stack.pop()
			else:
				stack.append(j)
		if j=="(":
			stack.append(j)
		if j==")":
			if(stack[-1]=="(" or stack[-1]=="?"):
				if len(stack)>0:
					stack.pop()
			else:
				stack.append(j)
	if len(stack)==0:
		ctr+=1
print ctr





