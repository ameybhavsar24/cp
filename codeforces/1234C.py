# 1234C.py
q= int(input())
while q:
	n = int(input())
	rows = [input().split() for x in range(2)] 
	# print(rows)
	ans = "YES"
	steps = 0
	row,col = 0,0
	while(steps<2*n):
		cType = rows[row]
		print(cType, end=" ")
		col+=1
		if(row==1 and col==n-1):
			break

		steps+=1
	q-=1