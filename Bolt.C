#include<bits/stdc++.h> // HEADER FILE
    
#include <iostream>
using namespace std;

void solve()
{
    float k1,k2,k3,v,record;
    cin>>k1>>k2>>k3>>v;
    float factor = k1*k2*k3*v;
    record = 100/factor;
    
    
    if (record < 9.575000000)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    

}

int main() // MAIN DEFINATION
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}