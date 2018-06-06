for i in range(int(input())):
    l = input().split()
    n, coin = int(l[0]), l[1]
    t = {"Head":"Tile","Tile":"Head"}
    if n % 2 == 0:
        print(coin)
    else:
        print(t[coin])