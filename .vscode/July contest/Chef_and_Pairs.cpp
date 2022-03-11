#include<bits/stdc++.h>//HEADER FILE INCLUSION
#include<vector>//HEADER FILE INCLUSION
// #define long long int lli;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define testcase(t) long long int t;cin>>t;while(t--)

using namespace std;
int D,t; 
void calculatepair(int a[],int K, int D)
{
  vector<pair<int,int>>p2;
  int ctr=0;
    for(int i=1;i<=K;i++)
    {  
       for(int j=1;j<=K;j++)
        p2.push_back(make_pair(a[i],a[j]));
    }
    for(int i=1;i<=K;i++)
    {  
       int D1 = abs(p2[i].first-p2[i].second);
       if(D1 == D)
       {
           ctr++;
       }
    }
    cout<<ctr<<endl;
}
int main()//DEFINING MAIN
{
    fastIO;
    testcase(t)
    {
        long long int i, N,q;
        cin>>N>>q;
        int K;
        for(i=0;i<N-1;i++)
        {
            int x,y;
            cin>>x>>y;
            vector<int>p[N-1];
            // addedge(p,x,y);
        }
        while(q--)
        {
            cin>>K>>D;
            int a[K];
            for(i=0;i<K;i++)
            {
                cin>>a[i];
            }
            calculatepair(a,K,D);
        }
    }
return 0;
}