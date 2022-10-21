try:
    t = int(input())
    while t > 0:
        x, y =  [int(i) for i in input().split()]
        if x > y:
            print("A")
        else:
            print("B")
        t=t-1
except: pass
