#include<bits/stdc++.h>//HEADER FILE INCLUSION
#include<vector>//HEADER FILE INCLUSION

using namespace std;
#define Loop(z,n) for(long long int i=z;i<n;i++)
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define testcase(t) long long int t;cin>>t;while(t--)

const int N=1e6;
long long int a[N];
long long int gcd1[N];
long long int gcd2[N];


void calgcd(long long int n)
{
    gcd1[1]=a[1];
    gcd2[n]=a[n];
    for(long long int i=n-1;i>0;i--)
    {
        gcd2[i]=__gcd(gcd2[i+1],a[i]);
    }
    Loop(2,n+1)
    {
        gcd1[i]=__gcd(gcd1[i-1],a[i]);
    }
   
}
int main()//DEFINING MAIN
{
fastIO

    testcase(t)
    {
        long long int n;
        cin>>n;
        Loop(1,n+1)
        {
            cin>>a[i];
        }   
        sort(a,a+n+1);

        calgcd(n);

        long long int sum=0;
        Loop(1,n+1)
        {
            sum+=a[i];
        }
        long long int min=LLONG_MAX;
        Loop(1,n+1)
        {
            long long int temp=(sum-a[i]+__gcd(gcd1[i-1],gcd2[i+1]))/__gcd(gcd1[i-1],gcd2[i+1]);
            if(temp<min)
            min=temp;
        }
        cout<<min<<endl;
    
        

    }
}