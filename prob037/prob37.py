# Euler project
# problem 37
# Michael Zijlstra
# 06/11/2013
import math

def isPrime(num):
	if num == 1:
		return False
	prime = True
	for i in range(2, int(math.sqrt(abs(num))) + 1):
		if num % i == 0:
			prime = False
			break
	return prime

def leftToRight(num):
	s = str(num)
	if len(s) == 1:
		return isPrime(int(s))
	else:
		s = s[1:len(s)]
		if len(s) == 1:
			return isPrime(int(s))
		else:
			return isPrime(int(s)) and leftToRight(int(s))

def rightToLeft(num):
	s = str(num)
	s = s[0:-1]
	if len(s) == 1:
		return isPrime(int(s))
	else:
		return isPrime(int(s)) and rightToLeft(int(s))

count = 0
num = 10
result = 0
while count < 11:
	if isPrime(num) and leftToRight(num) and rightToLeft(num):
		print num
		result += num
		count += 1
	num += 1

print "result: ", result
