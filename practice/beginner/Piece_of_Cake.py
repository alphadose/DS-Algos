from collections import Counter
t = int(raw_input())
while t>0:
	string = str(raw_input())
	flag = "NO"
	freq = Counter(string).values()
	total = sum(freq)
	for i in freq:
		if i*2 == total:
			flag = "YES"
			break
	print flag
	t-=1

