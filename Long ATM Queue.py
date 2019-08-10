N=int(input())
c=1
h=[int (i) for i in input().split()]
for i in range(1,N):
 if h[i]<h[i-1]:
  c+=1
  print(c)
