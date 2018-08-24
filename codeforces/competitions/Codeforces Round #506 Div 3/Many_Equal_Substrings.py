def check(m, idx, orig):
    if m[:orig]==m[len(m)-orig:]:
        return True
    else:
        return False

n,k = [int(i) for i in raw_input().split()]
s = raw_input()
orig = len(s)
for i in range(len(s)-1,-1,-1):
    m = s + s[i:]
    if check(m, i+1, orig)==True:
        print (s[:len(s)-i])*k + s[len(s)-i:]
        break
