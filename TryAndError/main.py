n=int(input())
a=list(map(int,input().split()))
s=0
c=0
for i in range(len(a)):
    if a[i]%4!=0:
        s=s+a[i]
        c=c+1
if s%4==0:
    print(c//2)
else:
    print(-1)