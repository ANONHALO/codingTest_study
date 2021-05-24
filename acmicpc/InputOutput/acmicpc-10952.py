import sys

a, b = map(int, sys.stdin.readline().split())
result = []
while not (a == 0 and b == 0):
    result.append(a+b)
    a, b = map(int, sys.stdin.readline().split())

for i in result:
    print(i)
