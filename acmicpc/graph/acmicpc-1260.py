import sys
import copy
from collections import deque

def dfs(graph, start, visit):
  visit[start] = True
  print(start, end = ' ')
  for i in graph[start]:
    if not visit[i]:
      dfs(graph, i, visit)

def bfs(graph, start, visit):
  queue = deque([start])
  visit[start] = True
  while queue:
    v = queue.popleft()
    print(v, end = ' ')
    for i in graph[v]:
      if not visit[i]:
        queue.append(i)
        visit[i] = True

def refresh(g, v):
  gg = copy.deepcopy(g)
  visited = copy.deepcopy(v)
  return gg, visited

n, l, s = map(int, sys.stdin.readline().split()) 
visited = [False] * (n + 1)                      
g = []
for _ in range(0, n+1):
  g.append([])

for _ in range(0, l):
  a, b = map(int, sys.stdin.readline().split())
  g[a].append(b)
  g[b].append(a)
for i in range(1, n+1):
  g[i].sort()


graph, visit = refresh(g, visited)
dfs(graph, s, visit)
print()
graph, visit = refresh(g, visited)  
bfs(graph, s, visit)


