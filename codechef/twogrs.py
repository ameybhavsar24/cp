# twogrs.py

from math import floor
lc = 0

def p(mset,l,u,lc):
	lc+=1
	mid = l + floor((u-l)/2)
	while(l<=u):
		if sum(mset[:mid]) == sum(mset[mid:]):
			return("YES")
		elif sum(mset[:mid]) > sum(mset[mid:]):
			return p(mset,l,mid-1,lc)
		else:
			return p(mset,mid+1,u,lc)
	if(lc<20):
		# print(mset[:mid],mset[mid:],lc)
		if(mset[mid] != mset[mid-1]):
			mset[mid],mset[mid-1] = mset[mid-1],mset[mid]
			return p(mset,0,u,lc)
	return("NO")

t = int(input())

while(t):

	data = [int(x) for x in input().split(" ")]
	mSet1 = list()
	for i in range(3):
		for j in range(data[i]):
			mSet1.append(i+1)
	# print(mSet1)
	# mSet1 = [int(x) for x in input().split(" ")]
	print( p( mSet1, 0, len(mSet1)-1 ,lc))
	t-=1