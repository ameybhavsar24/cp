t = int(input())
for i in range(t):
	a,b = map(int, input().split())
	la = a%10
	exp  = b%4
	if exp == 0: exp = 4
	ld = la**exp
	print(ld%10)
