# Project Euler
# Solution 45
# Michael Zijlstra
# 10/28/2013

import math

def isPrime(num):
	prime = True
	for i in range(2, int(math.sqrt(abs(num))) + 1):
		if num % i == 0:
			prime = False
			break
	return prime

def findFactors(n):
	result = set()
	for i in range(len(primes) -1, -1, -1):
		while n % primes[i] == 0:
			result.add(primes[i])
			n = n / primes[i]
	if n > 1:
		print "warning:", n
		result.add(n)
	return result

primes = []
factors = {}
check = 4
n = 2

while True:
	if isPrime(n):
		primes.append(n)
		if len(factors) != 0: factors = {}
	else:
		test = findFactors(n)
		if len(test) == check:
			factors[n] = test
		else:
			if len(factors) != 0: factors = {}

		if len(factors) == check:
			print factors
			break
	n += 1

