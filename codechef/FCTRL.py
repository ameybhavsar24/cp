t = int(input())
while(t):

	n = int(input())
	cz=0
	product = n
	# count of zero
	for j in range(n-1,0,-1):
		if(product%10 == 0):
			cz+=1
			product=j
		else:
			product*=j
	print(cz)
	t-=1