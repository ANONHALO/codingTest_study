import sys

n = list(map(int,list(sys.stdin.readline().rstrip())))
s = sum(n)
if 0 in n and s % 3 == 0:
  n.sort(reverse = True)
  for i in n:
    print(i,end="")
else:
  print(-1)


