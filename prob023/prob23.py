def divisors(n):
	res = []
	for i in range(1, n//2 + 1):
		if n % i == 0:
			res.append(i)
	return res

def main():
	print('divs of 12:', divisors(12))

	# first find abbundant numbers
	abundants = []
	for i in range(1, 28124):
		divs = divisors(i)
		if sum(divs) > i:
			abundants.append(i)

	print('abundants:', len(abundants))
	print('first:', abundants[0])

	# find all numbers that cannot be written as the sum of two abundants
	candidates = set()
	for i in range(1, 28124):
		candidates.add(i)
	
	removals = set()
	for i in range(len(abundants)):
		for j in range(i, len(abundants)):
			removals.add(abundants[i] + abundants[j])

	res = candidates - removals
	res = list(res)
	res.sort()

	for n in res:
		print(n)

	print(sum(res))

if __name__ == '__main__': main()
