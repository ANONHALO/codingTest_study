import sys

n = int(sys.stdin.readline())
lo = []

for _ in range(0, n):
  x, y = map(int, sys.stdin.readline().split())
  lo.append((x,y))

lo.sort()

for x, y in lo:
  print(x, y)
