def checkval(xny, pos, l, r):
	xny[i] = '1'
	return xny >= l and xny <= r

t = int(input())
while t:
	
	x,y,l,r = map(int, input().split())
	
	xny  = str(bin(x&y))
	xry  = str(bin(x|r))
	lbin = str(bin(l))
	rbin = str(bin(r))
	
	for i in range(len(xry)):
		if (xry[i] == '1' and xny[i] == '0'):
			if (checkval(xny, i, lbin, rbin)):
				xny[i] = '1'
	print(xny)
	
	t-=1
