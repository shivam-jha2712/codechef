for _ in range(int(input())):
    a, m = map(int, input().split())
    l = int(a/2)
    if(a & 1):
        for i in range(m-l, m+l+1):
            print(i, end=" ")
    else:
        for i in range(m-l, m+l+1):
            if(i != m):
                print(i, end=" ")
    print("")
