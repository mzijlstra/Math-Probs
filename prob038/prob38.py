# Project Euler
# Solution 38
# Michael Zijlstra
# 6/11/2013

def isPanDigital(s):
	for num in range(1, 10):
		if s.count(str(num)) != 1:
			return False
	return True

# chose 10000 since 1000020000 is definitely too big
total = ''
maxPan = 0
for i in range(1,10000):
	total = ''
	for x in range(1,10):
		total += str(i * x)
		if len(total) > 9:
			#print 'too big', total
			break
		if len(total) == 9 and isPanDigital(total):
			pan = int(total)
			print pan
			if pan > maxPan:
				maxPan = pan;

print 'result:', maxPan
