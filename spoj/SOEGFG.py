# SOEGFG.py

def SieveOfEratosthenes(f,n): 
      
    # Create a boolean array "prime[0..n]" and initialize 
    #  all entries it as true. A value in prime[i] will 
    # finally be false if i is Not a prime, else true. 
    prime = [True for i in range(n+1)] 
    p = 2
    while (p * p <= n): 
          
        # If prime[p] is not changed, then it is a prime 
        if (prime[p] == True): 
              
            # Update all multiples of p 
            for i in range(p * p, n+1, p): 
                prime[i] = False
        p += 1

    # for p in range(2, n): 
    #     if prime[p]: 
    #         print (p)
    return prime

# driver program 
f = int(input())
n = int(input())
primes = SieveOfEratosthenes(f,n)

for i in range(f,n+1):
	if primes[i]:
		print(i)


