# SEGSOE.py
from math import floor,sqrt

def simpleSieve(limit, primes):
	mark = [False]*(limit+1)

	for i in range(2,limit+1):
		if not mark[i]:
			primes.append(i)
			for j in range(i,limit+1,i):
				mark[j] = True


def primesInRange(low,high):
	limit = floor(sqrt(high)) + 1
	primes= list()
	simpleSieve(limit,primes)
	n = high - low + 1
	mark = [False]*(n+1)

	for i in range(len(primes)):
		loLim = floor(low/primes[i]) * primes[i]
		if loLim<low:
			loLim+=primes[i]
		if loLim==primes[i]:
			loLim += primes[i]

		for j in range(loLim,high+1,primes[i]):
			mark[j-low] = True

	finalPrime = list()
	for i in range(low,high+1):
		if(not mark[i-low]):
			finalPrime.append(i)

	return finalPrime



	return primes





# driver code
start = int(input())
end = int(input())
primes = primesInRange(start,end)
for x in primes:
	print(x,end=" ")
