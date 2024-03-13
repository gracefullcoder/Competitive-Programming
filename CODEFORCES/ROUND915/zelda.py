from collections import defaultdict

def solve():
    n = int(input())
    degree = [0]*(n+1)
    for _ in range(n-1):
        u, v = map(int, input().split())
        degree[u] += 1
        degree[v] += 1
    leaves = degree.count(1)
    print((leaves + 1) // 2)

t = int(input())
for _ in range(t):
    solve()
