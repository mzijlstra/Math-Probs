

def perms(lst):
	res = []
	# base case if we have only two numbers
	if len(lst) == 2:
		res.append(lst[0]*10 + lst[1])
		res.append(lst[1]*10 + lst[0])
		return res

	# else do a recursive call for each sub list (excluding successive numbers)
	for i in range(len(lst)):
		# create permutations of sub list without the number at 'i'
		sub = []
		for j in range(len(lst)):
			if j != i:
				sub.append(lst[j])
		subp = perms(sub)

		# put our left out number at 'i' in front of all the permutations
		for j in range(len(subp)):
			subp[j] += lst[i] * 10 ** (len(lst) - 1)

		# add these permutations to our result
		res = res + subp

	# once we have it for all perms we're ready to go
	return res

nums = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]

myperms = perms(nums)
print(myperms[999999])
