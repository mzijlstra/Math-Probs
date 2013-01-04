import math

def isPrime(num):
	prime = True
	for i in range(2, int(math.sqrt(abs(num))) + 1):
		if num % i == 0:
			prime = False
			break
	return prime
			

def checkPrimes(a, b):
	producing = True # False first time we don't create a prime
	n = 0
	while producing:
		num = n**2 + n*a + b
		if not isPrime(num):
			producing = False
			#print('not prime:', num)
			break
		n += 1
	return n # how many we've produced

#print('check', checkPrimes(-79, 1601))
maxPrimes = 0
maxa = 0
maxb = 0

for a in range(-1000, 1001):
	for b in range(-1000, 1001):
		primeCount = checkPrimes(a, b)
		if primeCount > maxPrimes:
			maxPrimes = primeCount
			maxa = a
			maxb = b
 
print(maxPrimes, maxa, maxb, maxa*maxb)
