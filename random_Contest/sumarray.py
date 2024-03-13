# cook your dish here
for _ in range(int(input())):
    n, k = map(int, input().strip().split(' '))
    z = []
    x = 0
    for hm in range(1, n + 1):
        if hm % 2 == 0:
            jm = 2
        else:
            jm = 1
        z.append(jm)
        x += jm
    if x > k or (k - x) % 2 == 1 or k > (100000 * n) - (n / 2):
        print(-1)
    else:
        rem = k - x
        for i in range(n):
            z[i] += min(99998, rem)
            rem -= min(99998, rem)
        print(*z)