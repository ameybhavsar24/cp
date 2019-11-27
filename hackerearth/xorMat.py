
# t = int(input())

# while(t):
for n in range(30):
    maxcell = 0
    maxocc = 0
    # n = int(input())
    for x in range(n):
        for y in range(n):
            cell = x^y
            if(cell>maxcell):
                maxcell = cell
                maxocc=1
            elif(cell==maxcell):
                maxocc+=1
    print("n=",n,"|",maxcell,maxocc,"\n")

    # t-=1