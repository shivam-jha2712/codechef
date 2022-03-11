#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << a + b + c - min(a, min(b, c)) << endl; // min is a aut
    // if (a + b > b + c && a + b > a + c)
    // {
    //     cout << a + b << endl;
    // }
    // else if (a + b < b + c && a + c < b + c)
    // {
    //     cout << b + c << endl;
    // }
    // else
    // {
    //     cout << c + a << endl;
    // }
}

int main() // MAIN DEFINATION
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }

    return 0;
}