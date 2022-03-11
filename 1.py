# import numpy as np
# R = int(input())
# a = [[int(input()) for x in range(R)] for y in range(R)]
# b = np.asarray(a)
# c = np.fliplr(b)
# print('Antidiagonal (sum): ', np.trace(b+c))
# # print('Antidiagonal (elements): ', np.diagonal(b))
t = int(input())
for i in range(t):
    n, x = map(int, input().split())
    a = list(map(int, input().split()))
    c = 0
    b = 0
    for i in a:
        c += 1
        if i < x:
            b = c
    print(b)
