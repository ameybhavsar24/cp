s = input()
chars = {}
for x in range(len(s)):
	if x not in chars:
		chars[x] = 1
count = len(chars)
print(count)
if(count % 2 == 0):
	print("CHAT WITH HER!")
else:
	print("IGNORE HIM!")
	
