n,a,b,k = map(int,input().split())
hp = [int(x) for x in input().split())
points = 0
loses = []
for x in hp:
	if(x%(a+b)!=0): loses.append(x)
	else:
		points+=1

for x in loses:
	
	
