# cook your dish here
t = int(input())
for i in range(t):
    n = int(input())
    l = list(str(int(input())))
    if '0' in l or '5' in l:
        print("Yes")
    else:
        print("No")
