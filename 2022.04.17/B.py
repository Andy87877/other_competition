N,K,T = map(int,input().split())

ans = int(K/N)
temp = K%N
if ((temp%2) == 0):
    ans += (temp >= T)
else:
    ans -= (temp <= T)

if (T >= K):
    ans = 0
    if (T == K):
        ans = 1
print(ans)