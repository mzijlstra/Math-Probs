# instead of dividing one by 2 through 999 we divide 10^1000
# float has way too limited percision
# this way we use python's invinite percision ints
num = 10 ** 10000
longest = 0
longestd = 0
for d in range(2, 1000):
	f = num // d
	s = str(f)

	# diverse checks to see if we're not just the same number over and over
	diverse = False
	match = False

	# pattern doesn't always start at the first number
	for start in range(0, 3):
		for i in range(start, len(s)):
			if s[i] != s[start]:
				diverse = True

			if diverse == True and s[i] == s[start]:
				# potential pattern found
				trying = True
				try:
					for j in range(start,i):
						if s[j] != s[i + j - start]:
							trying = False
							break
				except:
					trying = False
					#print('{}\n{}\n\n{}'.format(d, s[:i], s[i:]))

				# if try was successfull we have a match
				if trying == True:
					#patterns[d] = i
					if i - start > longest:
						longest = i - start
						longestd = d
					break

print(longestd,':',longest)

