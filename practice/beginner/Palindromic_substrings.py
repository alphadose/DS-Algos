t = int(raw_input())
alphabets = [chr(i) for i in range(97,123)]
answer=["No","Yes"]
while t>0:
	a=raw_input()
	b=raw_input()
	flag = 0
	for i in alphabets:
		if i in a and i in b:
			flag=1
	print answer[flag]
	t-=1
	
					
