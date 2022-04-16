# cook your dish here
import sys
input=sys.stdin.readline
for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    c=allinall=0
    for i in range(n):
        if l[i]>0:
            c+=1 
        elif l[i]<0:
            allinall+=1
            
print((c*(c-1)//2)+allinall*(allinall-1)//2)