priority = {
"^":5,
"/":4,
"*":3,
"-":2,
"+":1
}

operators = ['+','-','/','*','^']

t = int(input())
while(t):
	
	stackOP = []
	q = []
	
	exp = input()
	for x in exp:
		if x.isalpha():
			q.append(x)
		if x=='(':
			stackOP.append(x)
		if x==')':
			i=-1
			y = stackOP[i]
			while y!='(':
				q.append(y)
				i-=1
				y = stackOP[i]
			del(stackOP[i])
		
		if x in operators:
			while len(stackOP)!=0 and priority[stackOP[-1]] >= priority[x]:
				q.append(stackOP[-1])
				del(stackOP[-1])
			stackOP.append(x)
			
			
		print(stackOP)
	
	# while(len(stackOP)!=0):
		# q.append(stackOP[len(stackOP)-1])
		# del(stackOP[len(stackOP)-1])
		
	
	
	# print(filteredExp)
	# print(exp[1:-1])
	
	t-=1
