f = open("example.txt", "r")

lines = f.readlines()
highest = 0;
current = 0;

total = []
for line in lines:
    if line.strip():
        current+= int(line.strip())
    else:
        total.append(current)
        current = 0
total.append(current)
total.sort()
highest = sum(total[-3:])
print('highest is ' + str(highest))