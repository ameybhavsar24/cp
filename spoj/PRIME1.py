# your code goes here
from math import sqrt

def isPrime(n):
	if n<=1:
		return False

	for i in range(2,int(sqrt(n))+1):
		if n % i == 0:
			return False
	return True
	

t = int(input())
while(t):
 	nums = [int(x) for x in input().split()]
 	
 	primes = list(filter(isPrime,range(nums[0],nums[1]+1)))
 	# print(primes)
 	for i in range(len(primes)):
 		if (i+1)!=len(primes):
 			print(primes[i])
 		elif(t==1):
 			print(primes[i])
 		else:
 			print(primes[i], end="\n\n")
 	t-=1