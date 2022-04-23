#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a != 0)
    {
        if (a % 3 == 0 && b == 1)
        {
            cout << "Ambigious" << endl;
        }
        else if ((a + b) % 4 == 0)
        {
            cout << "Off" << endl;
        }
        else if ((a + b) % 4 == 1)
        // b == 1
        {
            cout << "On" << endl;
        }
    }

    if (a == 0 && b == 1)
    {
        cout << "On" << endl;
    }
}

int main() // MAIN DEFINATION
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}