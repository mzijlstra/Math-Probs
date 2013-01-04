
a = 1
b = 1
count = 2
while True:
	temp = a
	a = a + b
	b = temp
	count += 1
	if len(str(a)) >= 1000:
		break

print(count, a)
	
