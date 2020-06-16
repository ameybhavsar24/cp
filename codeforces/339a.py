s = [int(x) for x in input().split('+')]
s.sort()
# print(s)
if(len(s)<=1):
	print(str(s[0]))
else:
	for i in range(len(s)):
		if(i!=len(s)-1):
			print(str(s[i])+'+',end="")
		else:
			print(str(s[i]),end="")
