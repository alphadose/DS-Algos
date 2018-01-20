import sys
n = int(raw_input())
arr = []
store = {}
idx=0
while n>0:
	arr.append(store.copy())
	idx+=1
	ctr=0
	s= [i for i in raw_input().split()]
	if s[0]=="set":
		store[s[1]]=long(s[2])
	elif s[0]=="query":
		if s[1] in store.keys():
			for _,j in store.items():
				if j<store[s[1]]:
					ctr+=1
			print ctr
			sys.stdout.flush()
		else:
			print -1
			sys.stdout.flush()
	elif s[0]=="remove":
		if s[1] in store.keys():
			del store[s[1]]
	elif s[0]=="undo":
		store = arr[idx-long(s[1])-1]		
	n-=1