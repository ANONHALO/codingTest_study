import sys

n = int(sys.stdin.readline())
dp = [0] * 1000001

a = n
while a != 0:
  if a % 3 == 0:
    if dp[a//3] == 0:
      dp[a//3] = dp[a]+1             
    else:
      dp[a//3] = min(dp[a]+1, dp[a//3])
  if a % 2 == 0:
    if dp[a//2] == 0:
      dp[a//2] = dp[a]+1             
    else:
      dp[int(a/2)] = min(dp[a]+1, dp[int(a/2)])
  if dp[a-1] == 0:
    dp[a-1] = dp[a] + 1
  else:
    dp[a-1] = min(dp[a] + 1, dp[a-1])
  a = a - 1

print(dp[1])
