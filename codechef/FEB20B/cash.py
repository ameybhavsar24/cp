t = int(input())

while t:
	
	n,k = map(int, input().split())
	a = [int(x) for x in input().split()]
	
	b = [x%k for x in a]
	
	print(sum(b)%k)
	
	# d = [k-x for x in b]
	# # b is how much you need to remove to satisfy
	# # d is how much you need to add to satify
	# print(b)
	# print(d)
	
	# # choose c
	# currCoins = 0
	# c = 1
	# printed = False
	# for i in range(n):
		# currCoins+=b[i]
		# rest = sum(d[i+1:n])
		# print(currCoins, rest, c)
		# c = i+1
		# if(currCoins>rest):			
			# print(currCoins-rest)
			# printed = True
			# break
	# print(c)
	# if(not printed): print(0)
	
	t-=1




# 1
# 3 2
# 1 10 19
# [1, 0, 1]
# [1, 2, 1]
# 1 3 1
# 1 1 1
# 2 0 2
# 2
# 3
# here it outputs ans=2,
# but if c=1 then currCoins = 1
# put 1 coin in 19 :
	# making final array:
		# [0,10,20]
# hence, ans should be = 0


