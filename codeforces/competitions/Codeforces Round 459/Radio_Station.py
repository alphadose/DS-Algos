n,m = [i for i in raw_input().split()]
n = int(n)
m = int(m)
d = {}
for _ in range(n):
	a , b = [i for i in raw_input().split()]
	d[b] = a
for _ in range(m):
	a = [ i for i in raw_input().split()]
	out = a[0]+" "+a[1]+" #{}".format(d[a[1][:len(a[1])-1]])
	print out