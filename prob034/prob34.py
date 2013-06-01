# Euler Project
# Solution 34
# Michael Zijlstra
# 06/01/2013

import math

result = 0
for i in range(3,100000):
	s = str(i)
	num = 0
	for c in s:
		num += math.factorial(int(c))
	
	if num == i:
		print num
		result += num

print "Result: ", result

