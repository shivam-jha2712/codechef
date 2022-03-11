class xman:
    def __init__(self,n):
        self.n=n
        self.i=0
        self.palindromes=[0]*n
        self.prefixsums=[0]*n
        
    def add(self, value):
        self.palindromes[self.i] = value
        self.prefixsums[self.i] = value
        if self.i != 0:
            self.prefixsums[self.i] += self.prefixsums[self.i-1]
        self.i = self.i+1   
        
    def isfull(self):
        return self.i == self.n
        
    def getprefixsumrange(self, L, R):
        return self.prefixsums[R]-self.prefixsums[L]
    def getFirstPalin(self, index):
        return self.palindromes[index]
    
def createoddplain(inp):
    n=inp
    palin = inp
    n=n//10
    while n>0:
        palin=palin*10+(n%10)
        n=n//10
    return palin;
    
def generatepalindrome(xman):
    i=1
    while not xman.isfull():
        xman.add(createoddplain(i))
        i=i+1
        
        
def solve(L,R,xman):
    power=xman.getprefixsumrange(L-1,R-1);
    base = xman.getFirstPalin(L-1);
    return pow(base,power, 1000000007);
    
xman=xman(100001)
generatepalindrome(xman)
q=int(input())
while q>0:
    q=q-1
    line = input().split(" ")
    L, R = int(line[0]), int(line[1])
    print(solve(L,R, xman))
        
        

    
