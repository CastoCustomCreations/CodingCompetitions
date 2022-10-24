# cook your dish here
for _ in range(int(input())):
    n = int(input())
    lines = []
    NW = 0
    for i in range(n):
        lines.append(input())
    for i in range(10):
        count = 0 
        for k in range(n):
            if lines[k][i]=='1':
                count+=1
        if count%2 != 0:
            NW+=1 
    print(NW)
