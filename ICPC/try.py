def min_max_revenue(T, test_cases):
    for t in range(T):
        N, K = test_cases[t][0]
        bids = sorted(test_cases[t][1], reverse=True)
        
        max_revenue = sum(bids[i] for i in range(1, 2*K, 2))
        min_revenue = sum(sorted(bids[:2*K])[i] for i in range(1, 2*K, 2))
        
        print(min_revenue, max_revenue)

T = int(input())
test_cases = []
for _ in range(T):
    N, K = map(int, input().split())
    bids = list(map(int, input().split()))
    test_cases.append(((N, K), bids))

min_max_revenue(T, test_cases)
