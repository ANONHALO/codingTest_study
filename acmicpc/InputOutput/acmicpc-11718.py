import sys
result = []
a = sys.stdin.readline().strip()
result.append(a)
La = len(a)
while La != 0:
    a = sys.stdin.readline().strip()
    result.append(a)
    La = len(a)

for i in result:
    print(i)
