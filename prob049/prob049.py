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

def swap(s, p1, p2):
	'''takes a string, and two positions, 
	expects that p1 is left of (lower number than) p2'''
	if p1 != p2:
		return s[0:p1] + s[p2] + s[p1+1:p2] + s[p1] + s[p2+1:]
	else:
		return s

def recMakePerms(s, pos, perms):
	if pos < len(s) -1:
		for i in range(pos, len(s)):
			recMakePerms(swap(s, pos, i), pos + 1, perms)
	else:
		perms.add(int(s))
	return perms

def findSequence(items, step):
	for i in items:
		if i + step in items and i + step*2 in items:
			print i, i+step, i + step*2

primes = []
for n in range(2, 10000):
	if n > 1000 and isPrime(n):
		primes.append(n)

possibles = {}
for pr in primes:
	items = []
	perms = recMakePerms(str(pr), 0, set())
	for pe in perms:
		if pe > 1000 and isPrime(pe):
			items.append(pe)
	items.sort()
	if len(items) > 2:
		possibles[min(items)] = items
	
for po in possibles:
	items = possibles[po]
	diffs = []
	for i in range(len(items) -1):
		for j in range(i + 1, len(items)):
			diff = items[j] - items[i]
			if (diff != 0):
				diffs.append(diff)
	if (len(diffs) != len(set(diffs))):
		diffs.sort()
		dups = []
		for i in range(len(diffs) -1):
			if diffs[i] == diffs[i+1]:
				findSequence(items, diffs[i])


#	abcd
#	abdc
#	acbd
#	acdb
#	adbc
#	adcb
#	bacd
#	badc
#	bcad
#	bcda
#	bdac
#	bdca
#	cdab
#	cdba
#	cadb
#	cabd
#	cbda
#	cbad
#	dabc
#	dacb
#	dbac
#	dbca
#	dcba
#	dcab

