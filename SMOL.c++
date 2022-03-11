#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    if (k == 0)
    {
        cout << n << endl;
    }
    else
    {
        cout << n % k << endl;
    }
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
// My solution with TLE
// #include <bits/stdc++.h> // HEADER FILE

// #include <iostream>
// using namespace std;

// void solve()
// {
//     int n, k;
//     cin >> n >> k;
//     while (n > 0)
//     {
//         n = n - k;
//     }
//     if (n < 0)
//     {
//         cout << n + k << endl;
//     }
//     else
//     {
//         cout << n << endl;
//     }
// }
// int main() // MAIN DEFINATION
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }