def isSquare(x):
    if x == 1:
        return True
    low = 0
    high = x // 2
    root = high
    while root * root != x:
       root = (low + high) // 2
       if low + 1 >= high:
          return False
       if root * root > x:
          high = root
       else:
          low = root
    return True

n = int(raw_input())
a = [int(i) for i in raw_input().split()]
maxi=-pow(10,6)
for i in a:
	if i>maxi and not isSquare(abs(i)):
		maxi=i

print int(maxi)