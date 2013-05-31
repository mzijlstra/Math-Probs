# Michael Zijlstra
# 05/30/2013

from fractions import Fraction

fracs = []

for numer in range(10,100):
	for denum in range(numer,100):
		s_numer = str(numer)
		s_denum = str(denum)
		f1 = Fraction(numer, denum)
		if s_numer[1] == s_denum[0] and s_denum[1] != '0':
			f2 = Fraction(int(s_numer[0]), int(s_denum[1]))
			if f1 == f2 != 1:
				print numer, '/', denum, f2
				fracs.append(f1)

result = Fraction(1, 1)
for f in fracs:
	result *= f
print result
print result.denominator
