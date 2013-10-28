# Project Euler
# Solution 43
# Michael Zijlstra
# 6/14/2013

def swap(s, p1, p2):
	'''takes a string, and two positions, 
	expects that p1 is left of (lower number than) p2'''
	if p1 != p2:
		return s[0:p1] + s[p2] + s[p1+1:p2] + s[p1] + s[p2+1:]
	else:
		return s

def recMakePerms(s, pos):
	if pos < len(s) -1:
		for i in range(pos, len(s)):
			recMakePerms(swap(s, pos, i), pos + 1)
	else:
		perms.add(s)

def isSubDivisable(s):
	if int(s[1:4]) % 2 == 0  \
	and int(s[2:5]) % 3 == 0 \
	and int(s[3:6]) % 5 == 0 \
	and int(s[4:7]) % 7 == 0 \
	and int(s[5:8]) % 11 == 0 \
	and int(s[6:9]) % 13 == 0 \
	and int(s[7:10]) % 17 == 0:
		return True
	else:
		return False


perms = set()
recMakePerms('0123456789', 0)

result = 0
for perm in perms:
	if isSubDivisable(perm):
		result += int(perm)

print(result)


