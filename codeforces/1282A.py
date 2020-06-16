t = int(input())
while t:
	
	p,q,c,r = map(int,input().split())
	a=min(p,q)
	b=max(p,q)
	
	if(a<=c and c<=b):
		# print('case1')
		if r >= abs(b-a):
			ti = 0
		else:
			ti = abs(b-a)-2*r
	# elif(a<=b and b<=c):
		# print('case2')
		# if(abs(b-c)>r):
			# ti = abs(b-a)-abs(r-abs(b-c))
		# else:
			# ti = abs(b-a)
	# else:
		# print('case3')
		# if(abs(a-c)>r):
			# ti = b-a-a-c
		# else:
			# ti = abs(b-a)
			
	elif(c<=a and a<=b):
		# print('case2')
		if r>abs(a-c):
			ti = abs(a-b)-(r-abs(a-c))
		else:
			ti = abs(a-b)
	else:
		
		if r>abs(a-c):
			ti = 0
		else:
			# print('case3')
			if r>abs(b-c):
				ti = abs(a-b)-(r-abs(b-c))
			else:
				ti = abs(a-b)
	print(ti)
	t-=1
