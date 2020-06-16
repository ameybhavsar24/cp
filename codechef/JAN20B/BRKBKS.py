from math import ceil

t = int(input())
while t:
	
	s,w1,w2,w3 = map(int,input().split())
	print(ceil((w1+w2+w3)/s))
	
	t-=1
