import sys
sys.setrecursionlimit(10000)
stack = 0
n, l = map(int, sys.stdin.readline().split())
graph = []
visited = [False] * (n+1)
for _ in range(0, n+1):
  graph.append([])
for _ in range(0, l):
  a, b = map(int, sys.stdin.readline().split())
  graph[a].append(b)
  graph[b].append(a)
  

def dfs(graph, point, visited):
  visited[point] = True
  for i in graph[point]:
    if not visited[i]:
      dfs(graph, i, visited)

for i in range(1, n+1):
  if not visited[i]:
    stack = stack + 1
    dfs(graph, i, visited)


print(stack)
