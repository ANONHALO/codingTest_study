import sys
a, b, c = map(int, sys.stdin.readline().split())

n1 = (a+b)%c
n2 = ((a%c) + (b%c)) % c
n3 = (a*b)%c
n4 = ((a%c) * (b%c)) % c

print(n1)
print(n2)
print(n3)
print(n4)
