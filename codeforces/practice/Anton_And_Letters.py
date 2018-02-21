s = raw_input()
if s == "{}":
	print 0
else:
	s = s[1:len(s)-1].split(', ')
	print len(set(s))
