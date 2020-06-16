t = int(input())

while t:
	n = int(input())

	nums = [int(x) for x in input().split()]
	seq = []
	seqON = True
	temp = [nums[0]]
	for i in range(n-1):
		
		if(nums[i]+1==nums[i+1]):
			temp.append(nums[i+1])
		else:
			if(len(temp)==2):
				seq.append([temp[0]])
				seq.append([temp[1]])
			else:
				seq.append(temp)
			temp = [nums[i+1]]
		print(i,temp,seq)
	seq.append(temp)

		


	# print(seq)
	output = ''
	for i in range(len(seq)):
		currOut = ''
		if(len(seq)==1):
			currOut += str(seq[i][0])
		else:
			if(len(seq[i]) > 2):
				currOut += str(seq[i][0]) + '...' + str(seq[i][-1])+','
			elif(len(seq[i])==1):
				if(i==0):
					currOut += str(seq[i][0]) + ','
				elif(i==len(seq)-1):
					currOut += str(seq[i][0])
				else:
					currOut +=  str(seq[i][0]) + ','
			else:
				if(i==len(seq)-1):
					currOut += str(seq[i][0]) + ',' + str(seq[i][1])
				else:
					currOut += str(seq[i][0]) + ',' + str(seq[i][1]) + ','

		# print(currOut)
		output+=currOut
	print(output,end="\n")

	t-=1
	# dont delete this t-=1 !!!
