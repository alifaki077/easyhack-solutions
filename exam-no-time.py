n, t = map(int, input().split())
tm = [int(input()) for i in range(n)]

tm.sort()

ans = 0

for tmi in tm:
    if tmi <= t:
        ans += 1
        t -= tmi

print(ans)