import sys

N = int(sys.stdin.readline())
TestCase = []
DpTable = [0] * 12
for i in range(0, N):
    a = int(sys.stdin.readline())
    TestCase.append(a)

DpTable[1], DpTable[2], DpTable[3] = 1, 2, 4
for i in range(4, 12):
    DpTable[i] = DpTable[i-1] + DpTable[i-2] + DpTable[i-3]

for i in TestCase:
    print(DpTable[i])
    
