import sys

result = []

while True:
    try:
        a = sys.stdin.readline()
        result.append(a)
    except:
        break
    
for i in result:
    print(i,end='')
