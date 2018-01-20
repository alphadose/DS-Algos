s = raw_input()
count = [0]*5
tags = ["h","e","l","l","o"]
idx=0
for i in s:
	if i==tags[idx]:
		count[idx]+=1
		idx+=1
	if idx==5:
		break
if list(set(count))[0]==1:
	print "YES"
else:
	print "NO"
