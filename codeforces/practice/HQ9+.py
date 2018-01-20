s = raw_input()
check = ["H","Q","9"]
match = [i for i in check if i in s]
if len(match)>0:
	print "YES"
else:
	print "NO"