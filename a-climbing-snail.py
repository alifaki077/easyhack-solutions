import math

n, x, y = map(int, input().split())

print(math.ceil(n / (x - y)))