t = int(input())

while(t):
	n = int(input())
	nums = [range(1,n+1)]
	for i in range(n-1):
		if(nums[i+1]-nums[i]!=0):
			print(i+1)
	t-=1
