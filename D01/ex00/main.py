
f = open("input.txt", "r")

lines = f.readlines()
highest = 0;
current = 0;
for line in lines:
    if line.strip():
        current+= int(line.strip())
    else:
        if current > highest:
            highest = current
        current = 0

print('highest is ' + str(highest))
