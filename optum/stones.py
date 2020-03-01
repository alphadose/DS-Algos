import math
def getMin(stone, C):
    MAX = 10**19
    a = [MAX] * len(stone)
    a[0] = 0
    for i in range(0, len(stone)-1):
        for j in range(i+1, len(stone)):
            cost = a[i]  + math.pow(abs(stone[j] - stone[i]), 2) + C
            a[j] = min(a[j], cost)

    return int(a[len(stone)-1])

n, C = [float(i) for i in raw_input().split()]
stone = [float(i) for i in raw_input().split()]
# print(stone)
print(getMin(stone, C))