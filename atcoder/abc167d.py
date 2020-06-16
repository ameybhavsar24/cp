n,k = map(int,input().split())

a = list(map(int,input().split()))
# ~print(a)
cycle = []
index = 0
if (1 in a):
	for i in range(len(a)):
		if (a[i] == 1):
			index = i
			break
it = index
for i in range(n):
	# ~if (a[it] in cycle):
		# ~break
	cycle.append(a[it])
	it = a[it]-1
# ~print(cycle)
if (1 in a):
	print(cycle[(k+1)%n])
else:
	print(cycle[(k-1)%n])
