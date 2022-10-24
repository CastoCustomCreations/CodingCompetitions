# cook your dish here
t = int(input())
for i in range(t):
    n=int(input())
    S = input()
    si = 0 
    if (n>2):
        if (S[0]=="1"):
            si=si+1
        if (S[-1]=="0"):
            si=si+1 
        for j in range(0,n-2):
            if S[j]=="0" and S[j+1]=="1":
                si = si +1 
    else:
        si = 1 
    print(si)
