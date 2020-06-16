# Python3 implementation of the approach 
m = 998244353
  
# Function to return the GCD  
# of given numbers 
def gcd(a, b): 
  
    if (a == 0): 
        return b 
    return gcd(b % a, a) 
  
# Recursive function to return (x ^ n) % m 
def modexp(x, n): 
  
    if (n == 0) : 
        return 1
      
    elif (n % 2 == 0) : 
        return modexp((x * x) % m, n // 2) 
      
    else : 
        return (x * modexp((x * x) % m,  
                           (n - 1) / 2) % m) 
  
  
# Function to return the fraction modulo mod 
def getFractionModulo(a, b): 
  
    c = gcd(a, b) 
  
    a = a // c 
    b = b // c 
  
    # (b ^ m-2) % m 
    d = modexp(b, m - 2) 
  
    # Final answer 
    ans = ((a % m) * (d % m)) % m 
  
    return ans 


def getInverse(data):
	out = []
	# print(data)
	i = 0
	while (i<len(data)-1):
		n = data[i]
		d = data[i+1]
		# print(n,d)
		curr_ans = getFractionModulo(n,d)
		out.append(curr_ans)
		# print(curr_ans)
		i += 2
	return out
	
	
def logicalExpressionEvaluation(string): 
  
    arr = list() 
  
    # traversing string from the end. 
    n = len(string) 
    for i in range(n - 1, -1, -1): 
        if (string[i] == "["): 
  
            s = list() 
  
            while (arr[-1] != "]"): 
                s.append(arr[-1]) 
                arr.pop() 
  
            arr.pop() 
  
            # for NOT operation 
            if (len(s) == 3): 
                if s[2] == "1": 
                    arr.append("0") 
                else: 
                    arr.append("1") 
  
            # for AND and OR operation 
            elif (len(s) == 5): 
                a = int(s[0]) - 48
                b = int(s[4]) - 48
                c = 0
                if s[2] == "&": 
                    c = a & b 
                else: 
                    c = a | b 
                arr.append((c) + 48) 
              
        else: 
            arr.append(string[i]) 
  
    return arr[-1] 
  
	
t = int(input())
while(t):
	ex = input()
		
	p1n, p1d, p2n, p2d, p3n, p3d, p4n, p4d = 0,1,0,1,0,1,0,1
	# handle single case
	if (ex == '#'):
		p1n = p2n = p3n = p4n = 1
		p1d = p2d = p3d = p4d = 4
	else:
		c = 0
		for x in ex:
			if (x == '#'): c += 1
		c1,c2,c3,c4 = 0
		# total number of expressions
		# c is total number of hash
		tn = pow(4,c)
		# print(tn)
		
		depth = 0
		stack = []
		for i in range(
		# for i in range(len(ex)):
			# if (ex[i] == '('):
				# depth += 1
			# elif (ex[i] == ')'):
				# depth -=1
			# elif (ex[i] == '#'):
				# if (ex[i+1] == ')'):
				# if (ex[i+1] != ')' and ex[i+2] == '#'):
					# it's a op!
					
				
			# else:
				# definately a operator
				
		
		
		
	# returns a list of 4 vals
	
	
	output = getInverse([p1n, p1d, p2n, p2d, p3n, p3d, p4n, p4d])
	for x in output:
		print(x,end=" ")
	print("\n",end="")
	

	t-=1
