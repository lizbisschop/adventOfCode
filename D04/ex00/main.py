lines = open("input.txt", "r").readlines()
total = 0

for line in lines:
	split = line.strip().split(",")
	first = list(map(int, split[0].split('-')))
	second = list(map(int, split[1].split('-')))
	if (first[0] >= second[0] and first[1] <= second[1]) or (second[0] >= first[0] and second[1] <= first[1]):
		total += 1
print("total = " + str(total))