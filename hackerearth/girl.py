def count(arr,x):
	count = 0
	for y in arr:
		if x==y:
			count+=1
	return count

def greatest(arr,strings):
	maxVal = -1
	maxIndex = -1
	for i in range(len(arr)):
		if arr[i]>maxVal:
			maxVal = arr[i]
			maxIndex = i
		elif(arr[i]==maxVal):
			if(len(strings[i])<len(strings[i-1])):
				maxVal = arr[i]
				maxIndex = i
	return maxIndex
t =int(input())
while(t):
    data = input().split(" ")
    n = int(data[0])
    s = data[1]
    teamsStrings = [input() for i in range(n)]
    points = [0]*n
    for x in s:
    	for i in range(len(teamsStrings)):
    		points[i]+=count(teamsStrings[i],x)
    print(greatest(points,teamsStrings)+1)
    t-=1