import cs50

while True:
    height = cs50.get_int("Height: ")
    if height > 0 and height < 9:
        break
for i in range(height):
    for j in range(height-1-i):
        print(" ", end="")
    for k in range(i):
        print("#", end="")
    print("  ", end="")
    for l in range(i):
        print("#", end="")
    print()
