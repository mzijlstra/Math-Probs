
coins = [1, 2, 5, 10, 20, 50, 100, 200]

def findPerms(rem, idx):
	if rem == 0:
		return 1
	elif idx == 0:
		return findPerms(rem - coins[idx], idx)
	else:
		if rem >= coins[idx]:
			return findPerms(rem, idx - 1) + findPerms(rem - coins[idx], idx) 
		else:
			return findPerms(rem, idx - 1)



print findPerms(200, 7)
