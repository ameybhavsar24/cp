# robotsec.py

onesec = ['.','a','d','g','j','m','p','t','w','_']
twosec = [',','b','e','h','k','n','q','u','x']
threesec = ['?','c','f','i','l','o','r','v','y']
foursec = ['!','s','z','0','1','2','3','4','5','6','7','8','9']


dats = [onesec,twosec,threesec,foursec]

def timetaken(s,index):
	item = s[index]
	time = 0
	presstime = 0
	for i in range(len(dats)):
		for j in dats[i]:
			if(j == item):
				presstime+=int(i)+1

	movetime = 0
	if not(item in ['.',',','?','!']) and index!=len(s)-1:
		movetime+=1
	time = presstime+movetime
	return time



t =int(input())

while(t):
	times = 0
	s = input()
	for i in range(len(s)):
		times += timetaken(s,i)
	print(times)
	t-=1