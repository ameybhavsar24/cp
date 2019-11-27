def lexSmallest(a, n): 
  
   # sort to lexicographic
    a.sort() 
  
    # Concatenating sorted strings 
    answer = "" 
    for i in range( n): 
        answer += a[i] 
  
    return answer 
 
def getLex(strings,res):
	ts=list()
	for x in res:
		s = strings[0]+x+strings[2]
		ts.append(s)
		# print(s)
	return ts


# Driver code 
lens = [int(x) for x in input().split()]
strings = input().split(" ")
n = 3
test_str = strings[1]
res = [test_str[i: j] for i in range(len(test_str)) 
          for j in range(i + 1, len(test_str) + 1)] 
ans = getLex(strings,res)
print(ans)
print(ans.sort())
# print(lexSmallest(ans,n))
# print(strings)
# print(lexSmallest(strings, n)) 