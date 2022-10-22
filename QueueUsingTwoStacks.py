# Enter your code here. Read input from STDIN. Print output to STDOUT
q = int(input())
stack1 = []
stack2 = []

for i in range(q):
    t = list(input().split())
    if t[0] == '1':
        stack1.append(t[1])
    elif t[0]=='2':
        if not stack2:
            while stack1:
                stack2.append(stack1.pop())
        stack2.pop()
        
    else:
        if not stack2:
            while stack1:
                stack2.append(stack1.pop())
        print(stack2[-1])
                
