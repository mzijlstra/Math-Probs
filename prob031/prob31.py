# Euler Project
# Solution 31
# Michael Zijlstra
# Updated version 05/27/2013

coins = [1, 2, 5, 10, 20, 50, 100, 200]

def findPerms(rem, idx):
	if rem == 0:
		return 1
	if rem < 0 or idx < 0:
		return 0
	if rem > 0:
		return findPerms(rem - coins[idx], idx) + findPerms(rem, idx -1)

print findPerms(200, 7)
