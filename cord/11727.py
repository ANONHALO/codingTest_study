import sys

N = int(sys.stdin.readline())
DpTable = [0] * 1001
DpTable[1], DpTable[2] = 1, 3

for i in range(3, 1001):
    DpTable[i] = DpTable[i-1] + (DpTable[i-2] * 2)

print(DpTable[N] % 10007)
