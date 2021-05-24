import sys

n = int(sys.stdin.readline())
result = []

for _ in range(0, n):
    a, b = map(int, sys.stdin.readline().split())
    result.append(a+b)

for i in result:
    print(i)
    
