# 1266A.py

def evenExists(num):
	evenCount = 0
	i = 0
	while(evenCount<2 and i<len(num)):
		if num[i]%2 == 0: evenCount+=1
		i+=1
	if(evenCount>=2):
		return True
	return False


t = int(input())
while t:
	
	num = [int(x) for x in input()]
	s = sum(num)
	if s % 3 == 0 and evenExists(num) and 0 in num:
		print('red')
	else:
		print('cyan')
	
	t-=1
