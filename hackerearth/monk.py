# s = input()
s = 'aabcdeeiuo'
flag = 0
subS = []
vowels = ['a','e','i','o','u']
temp = ''
for x in s:
	if x in vowels:
		if(flag):
			# continuing last vowel string
			temp+=x
		else:
			# making a new string
			temp=x
			flag=1
	else:
		flag=0
		if(len(temp)>0):
			subS.append(temp)
		temp = ''





print(subS)
            
     