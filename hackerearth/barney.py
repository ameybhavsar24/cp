

def getMax(data,n):
    maxVal = float('-inf')
    maxValIndex = -1
    preMaxVal = float('-inf')
    preMaxIndex = -1
    
    for i in range(n):
        val = data[i][2]
        # print(val)
        if(val>maxVal):
            preMaxVal = maxVal
            preMaxIndex = maxValIndex
            maxVal = val
            maxValIndex = i
        elif(val>preMaxVal):
            preMaxVal = val
            preMaxIndex = i
        # print("i:",i,maxVal,preMaxVal)
    return([maxValIndex,preMaxIndex])
        

t = int(input())

while(t):
    
    n = int(input())
    data = list()
    for i in range(n):
        q = [int(x) for x in input().split()]
        q.append(q[0]-q[1])
        data.append(q)
    
    # print(data)
    maxs = getMax(data,n)
    # print(maxs)
    sums = 0
    for i in range(len(data)):
        if(i==maxs[0] or i==maxs[1]):
            sums+=data[i][0]
        else:
            sums-=data[i][1]
    print(sums,end="")
    t-=1