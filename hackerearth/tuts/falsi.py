from math import trunc

# denotes amount of precision needed to calculate roots
X_PRECISION = 4
F_PRECISION = 4

# chops off decimals
def gtv(x,precision):
	precisionFactor = 10**precision
	return trunc(x*precisionFactor)/precisionFactor

# calculates f(x) for some given f & x
def fncSolve(f,x):
	# f has the coefficients
	n = len(f)
	val = 0
	for i in range(n-1,-1,-1):
		val += f[n-i-1]*(x**i)
		# print(f[n-1-i])
	return gtv(val,F_PRECISION)

# finds the range in which the roots lie(in integer format)
def findRootRange(f):
	preTemp = fncSolve(f,0)
	temp = fncSolve(f,1)
	i=2
	while(temp<0):
		preTemp = temp
		temp = fncSolve(f,i)
		i+=1

	preTempX = i-2
	tempX = i-1
	return preTempX,tempX,preTemp,temp

# final function 
def falsi(f,iters=5):
	x0,x1,fx0,fx1 = findRootRange(f)
	for i in range(iters):	
		x2 = gtv( (x0*fx1 - x1*fx0) / (fx1-fx0), X_PRECISION)
		print('x'+str(i+2)+'=',x2,'f('+str(x2)+')=',fncSolve(f,x2))
		
		# mid = (x0+x1)/2
		fx2 = fncSolve(f,x2)
		if(fx2<0):
			x0 = x2
		else:
			x1 = x2
		
	# return x2,fncSolve(f,x2)

# ui/driver code
print('Enter coefficients of polynomial function.\nExample: For polynomial ax^2 + bx + c => a<space>b<space>c')
f = list(map(int,input().split(' ')))
print('How many iterations you want to calculate?')
iters = int(input())-1
if(iters<=0):
	print('Calculating default(5) iterations')
	falsi(f)
else:
	falsi(f,iters)