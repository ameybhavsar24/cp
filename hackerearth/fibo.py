def fibo(a,b,n):
	if n>=2:
		data = [a,b]
		for i in range(2,n):
			data.append(data[i-1] + data[i-2])
		return data

	if n==1:
		data = [a]
		return data
	if n<=0:
		return



# driver code

data = [int(x) for x in input().split(" ")]
ans = fibo(data[0],data[1],data[2])
print(ans[-1])