infile = open('names.txt')
content = infile.read()
infile.close()

names = content.split(',')
for i in range(len(names)):
	names[i] = names[i].replace('"', '')

names.sort()

res= 0
for i in range(len(names)):
	nsum = 0
	for c in names[i]:
		nsum += ord(c) - ord('A') + 1
	if names[i] == 'COLIN':
		print(i + 1, nsum, (i+1)*nsum)
	res += (i + 1) * nsum

print(res)
