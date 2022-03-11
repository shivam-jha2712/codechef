#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin>>a;
    while(a--) {
        unordered_map<string,int>mp;
        int b;
        cin>>b;
        for(int i=0;i<3*b;i++) {
            string s;
            int temp;
            cin>>s>>temp;
            if(mp.find(s) != mp.end()) {
                mp[s]+=temp;
            }
            else {
                mp.insert({s,temp});
             }
        }
        vector<int> v;
        for(auto i:mp) {
            v.push_back(i.second);
        }
        sort(v.begin(),v.end());
        for (int i = 0; i < v.size(); ++i)
        {
           cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}