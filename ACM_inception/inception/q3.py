def count_good_pairs(arr, k):
    n = len(arr)
    divisible_count = [0] * k

    for num in arr:
        divisible_count[num % k] += 1

    good_pairs = 0

    
    for i in range(1, k // 2 + 1):
        if i != k - i:
            good_pairs += divisible_count[i] * divisible_count[k - i]
        else:
            good_pairs += (divisible_count[i] * (divisible_count[i] - 1)) // 2

    return good_pairs


t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))

    result = count_good_pairs(arr, k)
    print(result)