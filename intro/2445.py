N = int(input())
size = N*2
for i in range(1, N+1):
    for j in range(0, i):
        print("*", end="")
    for j in range(i*2, size):
        print(" ", end="")
    for j in range(0, i):
        print("*", end="")
        if (i-1) == j:
            print()
for i in range(1, N):
    for j in range(i, N):
        print("*", end="")
    for j in range(0, i*2):
        print(" ", end="")
    for j in range(i, N):
        print("*", end="")
        if (N - 1) == j:
            print()