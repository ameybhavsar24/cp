def palin(x):
	ok = True
	for i in range(n/2+1):
		ok = ok and x[i] == x[n-i-1]
	return ok

n = int(input())
s = input()
for i in range(1,n):
	for j in range(i):
		stringX = s[i+j:n-i+j]
		print(stringX)
		
		
	
