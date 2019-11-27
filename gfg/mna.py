t = int(input())

while(t):
	n = int(input())
	nums = [int(x) for x in input().split()]
	for i in range(n-2):
		if(nums[i+1]-nums[i]!=1):
			print(i+2)
	t-=1
