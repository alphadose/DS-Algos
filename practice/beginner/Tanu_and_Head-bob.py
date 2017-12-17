t = int(raw_input())
while t > 0 :
	n = int(raw_input())
	s = raw_input()
	if "Y" in s and "I" not in s:
		print "NOT INDIAN"
	elif "I" in s and "Y" not in s:
		print "INDIAN"
	else:
		print "NOT SURE"
	t-=1