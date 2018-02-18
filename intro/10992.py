N = int(input())
for i in range(1,N+1):
    if i == N:
        for j in range(0, N*2-1):
            print("*", end="")
    else:
        for j in range(i, N):
            print(" ", end="")
        print("*", end="")
        for j in range(0, 2*(i-1)-1):
            print(" ", end="")
        if i != 1:
            print("*", end="")
    print()