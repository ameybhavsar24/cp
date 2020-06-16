n = int(input())
c = 0
for i in range(n):
	p,q,r = map(int,input().split())
	if(p+q+r>=2): c+=1
print(c)
