# Project Euler
# Solution 45
# Michael Zijlstra
# 10/28/2013

import math

dsquares = []
primes = []

def isPrime(num):
	prime = True
	for i in range(2, int(math.sqrt(abs(num))) + 1):
		if num % i == 0:
			prime = False
			break
	return prime

def findGoldbach(n):
	found = False
	for i in range(len(primes) -1, 0, -1):
		for ds in dsquares:
			if n - primes[i] - ds == 0:
				return True
	return False

for i in range(1, 100):
	dsquares.append(2 * pow(i, 2))

for n in range(1000000):
	if isPrime(n):
		primes.append(n)
	elif n % 2 == 1 and not findGoldbach(n):
		print n
		break
