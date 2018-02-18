N=int(input())
for i in range(1, N+1):
    for j in range(i, N):
        print(" ", end="")
    for j in range(0, i*2-1):
        print("*", end="")
    print()