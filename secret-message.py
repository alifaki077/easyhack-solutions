def cipher(s):
    new = []
    abc = "abcdefghijklmnopqrstuvwxyz"
    for i in range(len(s)):
        a = abc.index(s[i])
        z = abc.index(s[len(s) - i - 1])
        
        newword = abc[(a + z + 1) % 26]
        new.append(newword)
    return "".join(new)
    
n = int(input())

for i in range(n):
    s = input()
    print(cipher(s))