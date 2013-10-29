# Project Euler
# Solution 45
# Michael Zijlstra
# 10/28/2013

# this really is cheating, python has inifinte precision integers
total = 0
for n in range(1, 1001):
	total += pow(n, n)

print total
