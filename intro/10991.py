N = int(input())
for i in range(0, N):
    for j in range(i, N-1):
        print(" ", end="")
    for j in range(0, i+1):
        print("*", end="")
    print()
for i in range(1, N):
    for j in range(0, i):
        print(" ", end="")
    for j in range(i, N):
        print("*", end="")
    print()