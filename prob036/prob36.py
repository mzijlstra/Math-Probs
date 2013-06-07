# Euler Project
# Problem 36
# Michael Zijlstra
# June 7 2013

def isPal(s):
	for i in range(len(s) / 2):
		if s[i] != s[-i -1]:
			return False
	return True

result = 0;
for i in range(1000000):
	if isPal(str(i)) and isPal(bin(i)[2:]):
		print i
		result += i

print 'sum: ', result 
