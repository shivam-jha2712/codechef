#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void heist()
{
    long long D, d, P, Q, ans;
    cin >> D >> d >> P >> Q;
    long long a = P;
    long long n = D/d;
    long long diff = Q;
    long long rem = D%d;
    
    long long money1 = d* ((n*(2*a + (n-1)*diff))/2);
    long long money2 = rem* (a + n*diff);
    ans = money1 + money2;
    cout << ans << endl;
}

int main() // MAIN DEFINATION
{
    long long t;
    cin >> t;
    while (t--)
    {
        heist();
    }
    return 0;
}