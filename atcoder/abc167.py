n,m,x = map(int,input().split())

data = []

tcost,ca,cb,cc = 0,0,0,0

for i in range(n):
	inp = list(map(int,input().split()))
	ca += inp[1]
	cb += inp[2]
	cc += inp[3]
	data.append(inp)
	tcost += inp[0]


if (ca < x or cb < x or cc < x):
	print(-1)
	exit(0)


data = sorted(data, key= lambda x:x[0], reverse=True)


for i in range(len(data)):
	nca = ca - data[i][1]
	ncb = cb - data[i][2]
	ncc = cc - data[i][3]
	
	if (nca >= x and ncb >= x and ncc >= x):
		tcost -= data[i][0]
		ca -= data[i][1]
		cb -= data[i][2]
		cc -= data[i][3]
	
	
	
	
	
print(tcost)
