test = int(input())

while test:
	
	n = int(input())
	
	if(n>0):
		twelve = [0,0,0,0]
		three = [0,0,0,0]
		six = [0,0,0,0]
		nine = [0,0,0,0]
		data = [twelve, three, six, nine]
		for i in range(n):
			
			m,t = input().split()
			if(m=="A"):
				if(t=="12"): twelve[0]+=1
				if(t=="3"): three[0]+=1
				if(t=="6"): six[0]+=1
				if(t=="9"): nine[0]+=1
			if(m=="B"):
				if(t=="12"): twelve[1]+=1
				if(t=="3"): three[1]+=1
				if(t=="6"): six[1]+=1
				if(t=="9"): nine[1]+=1
			if(m=="C"):
				if(t=="12"): twelve[2]+=1
				if(t=="3"): three[2]+=1
				if(t=="6"): six[2]+=1
				if(t=="9"): nine[2]+=1
			if(m=="D"):
				if(t=="12"): twelve[3]+=1
				if(t=="3"): three[3]+=1
				if(t=="6"): six[3]+=1
				if(t=="9"): nine[3]+=1
				
		# print(data)
		
		for x in data:
			print(x)
		
		# print(max(data))
		mxe = -1
		mxei = []
		mxej = []
		for i in range(4):
			for i in range(len(data)):
				for j in range(len(data[i]):
					if data[i][j]>mxe:
						mxe = data[i][j]
						mxei = [i]
						mxej = [j]
					elif data[i][j]==mxe:
						mxei.append(i)
						mxej.append(j)
			
			# print(mxe)
			# print(mxei)
			# print(mxej)
			
			
		
	

	test-=1
