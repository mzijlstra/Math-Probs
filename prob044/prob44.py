# Project Euler
# Solution 44
# Michael Zijlstra
# 10/27/2013

pents = {}
for n in range(1, 5001):
	pents[n*(3*n -1)/2] = True

#for n in pents:
#	print n

for j in pents:
	for k in pents:
		if abs(j - k) in pents and j + k in pents:
			print j, k, abs(k -j)
