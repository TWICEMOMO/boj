N = int(input())
size = N*2
for i in range(1, N+1):
    for j in range(0,i-1):
        print(" ", end="")
    for j in range(0, size-(i*2)+1):
        print("*", end="")
    print()
for i in range(1, N):
    for j in range(i, N-1):
        print(" ", end="")
    for j in range(0, i*2+1):
        print("*", end="")
    print()