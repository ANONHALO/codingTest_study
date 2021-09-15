import sys
N = int(sys.stdin.readline())
DpTable = [0] * 1000001
l = len(DpTable)

for i in range(1, l):
    if i + 1 < l:
        if DpTable[i+1] == 0 or DpTable[i+1] > DpTable[i] + 1:
            DpTable[i+1] = DpTable[i] + 1
    if i * 2 < l:
        if DpTable[i*2] == 0 or DpTable[i*2] > DpTable[i] + 1:
            DpTable[i*2] = DpTable[i] + 1
    if i * 3 < l:
        if DpTable[i*3] == 0 or DpTable[i*3] > DpTable[i] + 1:
            DpTable[i*3] = DpTable[i] + 1
print(DpTable[N])
