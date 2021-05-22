import sys
n = int(sys.stdin.readline())
result = []

for _ in range(0, n):
    result.append(list(map(int, sys.stdin.readline().split())))
    

for n, x in enumerate(result):
    a, b = x
    print(f"Case #{n+1}: {a} + {b} = {a+b}")
    
