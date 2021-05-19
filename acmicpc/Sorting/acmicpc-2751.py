import sys

n = int(sys.stdin.readline().strip())
ar = []

for _ in range(0, n):
    i = int(sys.stdin.readline().strip())
    ar.append(i)

ar.sort()
for i in ar:
    print(i)
    

