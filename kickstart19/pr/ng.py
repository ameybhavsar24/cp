from math import floor
import sys

def get(a,b):
    mid = a + floor((b+1-a)/2)
    print(mid)
    sys.stdout.flush()
    ans = input()
    if(ans == "TOO_BIG"):
        get(a,mid-1)
    elif(ans == "TOO_SMALL"):
        get(mid+1,b)
    else:
        pass


t = int(input())
while(t):
    a,b = map(int,input().split())
    _ = int(input())
    get(a,b)
    t-=1