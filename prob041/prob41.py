# Project Euler
# Solution 41
# Michael Zijlstra
# 6/12/2013
import math

def isPandigital(n):
	s = str(n)
	for i in range(1,len(s)+1):
		if s.count(str(i)) != 1:
			return False
	return True

def isPrime(num):
	prime = True
	for i in range(2, int(math.sqrt(abs(num))) + 1):
		if num % i == 0:
			prime = False
			break
	return prime

for i in range(7654321, 7000000, -1):
	if isPandigital(i) and isPrime(i): 
		print(i)
		break

