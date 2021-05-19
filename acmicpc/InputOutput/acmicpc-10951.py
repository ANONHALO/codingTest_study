import sys

i = sys.stdin.readline().strip()
Li = len(i)
result = []

while Li == 3:
     a, b = int(i[0]), int(i[2])
     result.append(a+b)
     i = sys.stdin.readline().strip()
     Li = len(i)  

for x in result:
    print(x)
