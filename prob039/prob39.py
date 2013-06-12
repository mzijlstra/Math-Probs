# Project Euler
# Solution 39
# Michael Zijlstra
# 6/12/2013
import math

maxPerimeter = 3
maxSolutions = set()

for p in range(1,1001):
	solutions = set()
	for a in range(1, p - 1):
		for b in range(1, p - a):
			c = p - a - b
			if c == math.sqrt(a**2 + b**2) and c != 0:
				solution = frozenset((a,b,c))
				solutions.add(solution) 
	if len(solutions) > len(maxSolutions):
		maxSolutions = solutions
		maxPerimeter = p

print "Result:", maxPerimeter, len(maxSolutions), maxSolutions
