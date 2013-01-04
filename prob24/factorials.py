fact = 1

for i in range(1, 11):
	fact *= i
	print('{:2}: {:10}'.format(i, fact))
