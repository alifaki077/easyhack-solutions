h = int(input())
w = h * 3

h -= 2

print("*" * w)

for i in range(h):
    print("*" + (" " * (w - 2)) + "*")
    
print("*" * w)