# Project Euler
# Problem 28
# Michael Zijlstra
# 05/26/2103
size = 1001
a = [[0 for x in range(size)] for y in range(size)]

direction = 0
steps = 1
x = size / 2
y = size / 2
a[x][y] = 1
count = 2

def printGrid(a):
	for l in a:
		for i in l:
			print i,
		print
	print

def doStep():
	global x;
	global y;
	if direction == 0:
		x += 1
	elif direction == 1:
		y += 1
	elif direction == 2:
		x -= 1
	elif direction == 3:
		y -= 1

#printGrid(a)

# creates the number spiral
while steps <= size:
	for i in range(2):
		for i in range(steps):
			doStep();
			if x < size and y < size:
				a[y][x] = count
				count += 1
				#printGrid(a)
		direction += 1
		direction %= 4
	steps += 1

# count the diagonals
result = 0
for r in range(size):
	result += a[r][r]
	result += a[-r - 1][r]

result -= a[size / 2][size / 2]
print result
