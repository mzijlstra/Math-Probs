# Project Euler
# Solution 32
# Michael Zijlstra
# 5/26/2013

pans = set()

for i in range(2000):
	for j in range(2000):
		prod = i * j
		s = str(prod) + str(i) + str(j)

		pan = True
		for num in range(1, 10):
			if s.count(str(num)) != 1:
				pan = False
				break

		if pan and '0' not in s:
			pans.add(prod)

print pans
print sum(pans)
