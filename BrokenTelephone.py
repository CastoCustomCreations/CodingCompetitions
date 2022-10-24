# cook your dish here
for _ in range(int(input())):
    n = int(input())
    string = input().strip().split()
    count = 0
    for i in range(n):
        if i >0 and string[i-1]!=string[i]:
            count+=1 
            continue
        if i <n-1 and string[i]!=string[i+1]:
            count+=1
    print(count)    
