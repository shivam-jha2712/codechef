#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int N, M, Q, i, count = 0;
    char ch;
    cin >> N >> M >> Q;
    unordered_set<int> st;
    if (1 <= N <= 10000 && 1 <= M <= 10000 && 1 <= M <= 10000)
    {
        int f = 1;
        while (Q--)
        {
            cin >> ch >> i;

            if (f == 1)
            {
                if (ch == '-')
                {
                    if (st.find(i) != st.end())
                    {
                        st.erase(i);
                    }
                    else
                    {
                        f = 0;
                    }
                }
                else
                {
                    if ((int)st.size() == M)
                    {
                        f = 0;
                    }
                    else
                    {
                        st.insert(i);
                    }
                }
            }
        }
        if (f == 0)
        {
            cout << "Inconsistent" << endl;
        }
        else
        {
            cout << "Consistent" << endl;
        }
        }
}
int main() // MAIN DEFINATION
{
    int t;

    cin >> t;
    if (1 <= t <= 20)
    {
        while (t--)
        {
            solve();
        }
    }

    return 0;
}