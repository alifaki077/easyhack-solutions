def solve():
    days = 0
    while _len() > 0:
        diss = False
        for i in range(len(a)):
            if a[i] == "d": continue

            if a[i] == "#":
                a[i] = "d"
                diss = True
            elif a[i] == "L" and a[_next(i)] == "R":
                a[i] = "d"
                a[_next(i)] = "d"
                diss = True
        if not diss:
            return "Unfortunately We are doomed!"
        else:
            days += 1
    return days

def _len():
    ans = 0
    for i in a:
        if i != "d":
            ans += 1
    return ans

def _next(i):
    i += 1
    while a[i] == "d" and i < len(a) - 1:
        i += 1
    return i

for i in range(int(input())):
    a = [i for i in input()]
    print(solve())
