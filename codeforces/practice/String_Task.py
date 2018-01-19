s = raw_input().lower()
vow = ["a","e","i","o","u","y"]
res = [i for i in s if i not in vow]
res = "."+(".").join(res)
print res