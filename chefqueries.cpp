#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x,k;
    cin>>x>>k;
    vector<long long>a(x);

    for(int i =0;i<x;i++)
    {
        cin>>a[i];
    }
    while(k--)
    {
        long long k_num;
        cin>>k_num;
        if(k_num==1)
        {
            long long l,r,x;
            cin>>l>>r>>x;
            for(int i=l-1;i<=r-1;i++)
            {
                a[i]=a[i]+((x+i+1-l)*(x+i+1-l));
            }
        }

        if(k_num==2)
        {   
            long long y;
            cin>>y;
            cout<<a[y-1]<<endl;
        }
   
    }

}