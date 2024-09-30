def hanoi(rings, start, end, reserve):
    if rings > 0:
        hanoi(rings - 1, start, reserve, end)
        print(start, "=>", end)
        hanoi(rings - 1, reserve, end, start)

rings = int(input("Amount of rings: "))
hanoi(rings, 1, 3, 2)