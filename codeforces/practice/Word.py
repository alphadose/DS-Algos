s = raw_input()
low=0
high=0
for i in s:
	if i.islower():
		low+=1
	else:
		high+=1
if low>=high:
	print s.lower()
else:
	print s.upper()
