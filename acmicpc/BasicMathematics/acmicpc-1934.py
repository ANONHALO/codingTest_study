import sys
import copy

def LCM(aa, bb):
  al = copy.deepcopy(aa)
  bl = copy.deepcopy(bb)
  common = 1
  while al and bl:
    if al[0] == bl[0]:
      common = common * al[0]
      del al[0]
      del bl[0]
    elif al[0] > bl[0]:
      common = common * bl[0]
      del bl[0]
    else:
      common = common * al[0]
      del al[0]
  while al:
    common = common * al[0]
    del al[0]
  while bl:
    common = common * bl[0]
    del bl[0]
  return common

def Factorization(a, prime):
  aa = []
  for i in prime:
    while a % i == 0:
      aa.append(i)
      a = a / i
    if a == 1:
      break
  return aa

result = []
k = 10000
prime = []
num = [False, False] + [True] * (k-1)
for i in range(2, k):
  if num[i]:
    prime.append(i)
    ran = k // i
    for j in range(1, ran+1):
      num[j*i] = False
n = int(sys.stdin.readline())

for _ in range(0, n):
  a, b = map(int, sys.stdin.readline().split())
  aa = Factorization(a, prime)
  bb = Factorization(b, prime)
  result.append(LCM(aa, bb))

for i in result:
  print(i)






