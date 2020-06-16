from math import floor, sqrt,ceil

t = int(input())

for i in range(t):
	x,k = map(int, input().split())
	xDivs = 0
	r = floor(sqrt(x+1))+1
	# print("r=",r)
	for j in range(1,r+1):
		if (x%j == 0):
			xDivs += 1
	
	# x is a divisor of itself
	if(r<x):
		xDivs+=1
	
	print(xDivs)
	
	if (xDivs > k):
		# print("Case",i+1,x,k,"1")
		print(1)
	else:
		# print("Case",i+1,x,k,"0**")
		print(0)

