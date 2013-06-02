# Euler project
# problem 35
# Michael Zijlstra
# 06/02/2013
import math

def isPrime(num):
	prime = True
	for i in range(2, int(math.sqrt(abs(num))) + 1):
		if num % i == 0:
			prime = False
			break
	return prime

result = 0
for i in range(2,1000000):
	if isPrime(i):
		circular = True
		s = str(i)
		for c in range(len(s) - 1):
			s = s[1:len(s)] + s[0]
			if not isPrime(int(s)):
				circular = False
		if circular:
			print i
			result += 1

print result
