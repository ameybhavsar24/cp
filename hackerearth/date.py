'''
# Sample code to perform I/O:

name = input()                  # Reading input from STDIN
print('Hi, %s.' % name)         # Writing output to STDOUT

# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''

# Write your code here

months = ['January', 'February', 'March', 'April', 'May', 'June', 'July', 'August', 'September', 'October', 'November','December']


def previousDate(data):
    day = int(data[0])
    
    month = months.index(data[1])+1
    year = int(data[2])
    leap = 0
    
    pdate = list() 
    # store previous date here
    
    if(year%4 == 0):
        leap = 1
    
    pday,pmonth,pyear = 0,0,0
    if(month==1 and day==1):
        # new year
        return ([31,months[11],year-1])
    elif(month==3 and day==1):
        # march 1
        if(year%4 == 0):
            return ([29,months[1],year])
        return ([28,months[1],year])
    elif(day==1):
        if(month%2 == 0):
            return([30, months[month-2], year])
    else:
        return([day-1, months[month-1], year])
        
        
        
    
    
t = int(input())
while(t):
    
    data = input().split(" ")
    pdata = previousDate(data)
    for i in pdata:
        print(str(x),end=" ")
    print("\n")
    t-=1