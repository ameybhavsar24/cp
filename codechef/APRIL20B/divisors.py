# print all divisors
j = 2310
divisors = []
for i in range(1,j+1):
	if j % i == 0:
		divisors.append(i)
		
print(len(divisors))
print(divisors)
