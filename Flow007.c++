#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a, c, ck = 0, n, i, cc, dd, rem = 0, rev = 0, j = 1;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        while (a != 0)
        {
            rem = a % 10;
            rev = rev * 10 + rem;
            a /= 10;
        }
        cout << rev << endl;
        rev = 0;
    }
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     for (int i = 1; i <= t; i++)
//     {
//         int n, reverse = 0, r;
//         cin >> n;
//         for (; n > 0; n = n / 10)
//         {
//             r = n % 10;
//             reverse = reverse * 10 + r;
//         }
//         cout << reverse << endl;
//     }
//     return 0;
// }