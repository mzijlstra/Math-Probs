def divisors(num):
	res = []
	for i in range(1, num//2 + 1):
		if num % i == 0:
			res.append(i)
	return res

amnicable = set()
for i in range(1, 10000):
	if i not in amnicable:
		divs1 = divisors(i)
		sumd1 = sum(divs1)
		divs2 = divisors(sumd1)
		sumd2 = sum(divs2)
		if i == sumd2 and i != sumd1:
			print(i, sumd1)
			amnicable.add(i)
			amnicable.add(sumd1)

print(sum(amnicable))
