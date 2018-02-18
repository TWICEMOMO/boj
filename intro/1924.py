day=["SUN","MON","TUE","WED","THU","FRI","SAT"]
month=[0,31,28,31,30,31,30,31,31,30,31,30,31]
X=input().split()
T=int(X[1]);
for i in range(0,int(X[0])):
    T+=month[i]
print(day[T%7])