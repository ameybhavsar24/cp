from math import sqrt, floor

def isPrime(n):
	if (n<=1):
		return False
	for i in range(2,floor(sqrt(n))+1):
		if (n%i == 0):
			return False
	return True

# max_n = 1e6
# data = [[0]*2]*max_n


# x,k = map(int,input().split())
n = int(input())



data = []

# if no. of divisors of x > k then yes


for j in range (1,n+1):
	divisors = []
	for i in range(1,j+1):
		if j % i == 0:
			divisors.append(i)
			
	# print(divisors)
	primes = 0
	for y in divisors:
		if (isPrime(y)):
			primes += 1
	# if (x == len(divisors) and k == primes):
		# print(len(divisors), primes, divisors)
	if (len(divisors) >=1 and primes >=1 and (len(divisors),primes) not in data):
		data.append((len(divisors), primes))
	

# data.sort()
data.sort(key = lambda x: x[0])  
# data.sort(key = lambda x: x[1])  
# for x in data:
	# print(x)
	
	
print(len(data))
for x in data:
	print(x[0], x[1])	
	
