
lines = open("input.txt", "r").readlines()
total = 0
for line in lines:
	split = line.strip().split(',')
	first = list(map(int, split[0].split('-')))
	second = list(map(int, split[1].split('-')))


	r1 = range(first[0], first[1] + 1)
	r2 = range(second[0], second[1] + 1)
	r1s = set(r1)
	r2s = set(r2)
	if (r1s.intersection(r2) or r2s.intersection(r1)):
		total += 1
print("total = " + str(total))