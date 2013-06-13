# Project Euler
# Solution 40
# Michael Zijlstra
# 6/12/2013

s = '.'
for i in range(1,200000):
	s += str(i)

result = int(s[1]) * int(s[10]) * int(s[100]) * int(s[1000]) * int(s[10000]) * int(s[100000]) * int(s[1000000])

print int(s[1]) , int(s[10]) , int(s[100]) , int(s[1000]) , int(s[10000]) , int(s[100000]) , int(s[1000000])
print result
