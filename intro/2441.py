N=int(input())
for i in range(N, 0, -1):
    for j in range(i, N):
        print(" ", end="")
    for j in range(0, i):
        print("*", end="")
    print()