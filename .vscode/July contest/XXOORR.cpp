#include <bits/stdc++.h>
#include <vector>
using namespace std;

void solve()
{
    int ans, m, k;
    cin >> m >> k;
    vector<int> a(m);
    int l = -1;

    for (int &i : a)
    {
        cin >> i;
        if (i > l)
        {
            l = i;
        }
    }
    int d, counter;

    vector<int> v(32);
    for (int j = 0; j <= 30; j++)
    {
        counter = 0;
        for (int &i : a)
        {
            if (i % 2 != 0)
            {
                counter++;
            }
            i = i / 2;
        }
        v[j] = counter;
    }
    ans = 0;
    for (int j = 0; j <= 30; j++)
    {
        if (v[j] % k == 0)
        {
            ans += v[j] / k;
        }
        else
        {
            ans += v[j] / k + 1;
        }
    }
    cout << ans << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}