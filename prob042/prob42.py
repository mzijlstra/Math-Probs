# Project Euler
# Solution 42
# Michael Zijlstra
# 10/27/2013

result = 0
tnums = []
for i in range(100):
	num = 0.5*i*(i+1)
	tnums.append(num)

f = open("words.txt")
words = f.read()
for word in words.split(","):
	total = 0
	for c in word[1:len(word)-1]:
		total += ord(c) - ord('@')
	if total in tnums:
		result += 1

print result
