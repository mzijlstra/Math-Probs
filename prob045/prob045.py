# Project Euler
# Solution 45
# Michael Zijlstra
# 10/27/2013

tnums = {}
pnums = {}
hnums = {}

for n in range(1, 90000):
	tnums[n*(n+1)/2] = True
	pnums[n*(3*n -1)/2] = True
	hnums[n*(2*n -1)] = True

for n in tnums:
	if n in pnums and n in hnums:
		print n
