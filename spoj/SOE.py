import math
import time


# start = time.time()


def soe(f,n):

	A = [True]*(n-2)

	for i in range(2, int(math.sqrt(n))):
		if A[i-2]:
			for j in range(i*i,n,i):
				A[j-2] = False

	primes = list()
	for x in range(2,n):
		if A[x-2]:
			primes.append(x)
	return primes


# execT = time.time() - start

# print(primes)

f = int(input())
n = int(input())

print(soe(f,n))
# print(sum)
# print('Execution Time: ', execT)
