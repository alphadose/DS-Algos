s = raw_input()
if s[0]==s[0].lower() and s[1:]==s[1:].upper():
	print s[0].upper()+s[1:].lower()
elif s==s.upper():
	print s.lower()
else:
	print s
