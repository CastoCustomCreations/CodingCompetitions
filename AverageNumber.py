# cook your dish here
for _ in range(int(input())):
    N, K, V = map(int, input().split())
    As = list(map(int, input().split()))
    missing_val = (V * (N + K) - sum(As)) / K
    if missing_val.is_integer() and missing_val > 0:
        print(int(missing_val))
    else:
        print(-1)
