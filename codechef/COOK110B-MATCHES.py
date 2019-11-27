data  = [6,2,5,5,4,5,6,3,7,6]

t = int(input())

while(t):

	nums = [int(x) for x in input().split(" ")]
	nSum = nums[0] + nums[1]
	matches = 0
	for i in range(len(nSum)):
		matches+=data[i]
	print(matches)
	t-=1