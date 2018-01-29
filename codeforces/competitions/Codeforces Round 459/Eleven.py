arr = [1,1]
n = int(raw_input())
for i in range(2,n+2):
	arr.append(arr[i-1]+arr[i-2])
s=""
for i in range(n):
	if (i+1) in arr:
		s+="O"
	else:
		s+="o"
print s

