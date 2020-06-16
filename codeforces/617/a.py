
def checkNum(arr):
	x = arr[0]
	for i in range(1,len(arr)):
		if(arr[i]!=x):
			return False
	return True

def checkEven(arr):
	for x in arr:
		if(x%2!=0):
			return False
	return True

t = int(input())
while t:
	
	n = int(input())
	nums = [int(x) for x in input().split()]
	
	s = sum(nums)
	if(s%2!=0):
		print("YES\n")
	else:
		even = False
		odd = False
		for x in nums:
			if(x%2==0):even = True
			else: odd = True
		if(even and odd): print("YES\n")
		else:
			print("NO\n")
	
	t-=1
