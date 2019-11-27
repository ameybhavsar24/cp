# # 1216.py

from math import floor

def count(arr,x):
	c=0
	for y in arr:
		if x==y:
			c+=1
	return c

n = int(input())
s = input()

ops = 0

if(count(s,'a')>count(s,'b')):
	diff = count(s,'a') - count(s,'b')
	for x in s:
		if(diff>0):
			if x=='a':
				x='b'
				ops+=1
				diff-=1
		else:
			break
elif(count(s,'a')<count(s,'b')):
	diff = count(s,'b') - count(s,'a')
	for x in s:
		if(diff>0):
			if x=='b':
				x='a'
				ops+=1
				diff-=1
		else:
			break
print(ops)
print(s)