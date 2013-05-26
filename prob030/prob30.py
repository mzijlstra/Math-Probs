# Euler Project
# Solution 30
# Michael Zijlstra
# 05/26/2013

# 300,000 upper limit chosen on 99999
limit = 300000
exp = 5
good = []

for i in range(2, limit) :
	s = str(i)
	sum = 0
	for c in s:
		sum += int(c) ** exp
	if sum == i:
		good.append(i)

result = 0
for num in good:
	result += num
	print num

print result

