def gcd(a, b):
    if (b == 0):
        return a
    return gcd(b, a%b)

N = int(input())
for i in range(N):
    A = input().split()
    size = int(A[0])
    A = A[1:]
    ans=0
    for k in range(0, size):
        for j in range(k+1, size):
            ans+=gcd(int(A[k]), int(A[j]))
    print(ans)
