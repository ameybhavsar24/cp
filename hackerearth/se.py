# 2e6b495.py

# for j in range(i,x+i):
#             ite = x-j-1
#             sums+=s[ite]
# def getSum(s,x,i):

t = int(input())

while(t):
	s = list()
	data  = [int(x) for x in input().split(" ")]
	x=data[0]
	y=data[1]
	n=data[2]

	for i in range(x):
		s.append(y)
	for i in range(x,n):
		sums = 0
		for j in range(x+i-1,i-1,-1):
			sums+=s[j]
			# print(sums)
		s.append(sums)

	print(s)
	t-=1