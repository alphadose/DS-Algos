one = [int(i) for i in raw_input().split()]
two = [int(i) for i in raw_input().split()]

# DIAGx = 0,5
# diAGy = 1,6
arr = []
for i in range(0,7,2):
    arr.append([two[i],two[i+1]])

for i in arr:
    if (i[0]>=one[0] and i[0]<=one[4]) or (i[0]<=one[0] and i[0]>=one[4]):
        if (i[1]>=one[1] and i[1]<=one[5]) or (i[1]<=one[1] and i[1]>=one[5]):
            print "YES"
            exit(0)

print "NO"