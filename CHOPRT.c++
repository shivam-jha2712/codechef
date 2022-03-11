#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

void solve()
{
    long long int m, n;
    cin >> m >> n;

    if (m < n)
    {
        cout << "<" << endl;
    }
    else if (m > n)
    {
        cout << ">" << endl;
    }
    else

    {
        cout << "=" << endl;
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

// #include <bits/stdc++.h> // HEADER FILE

// #include <iostream>
// using namespace std;

// void solve()
// {
//     long long int m, n;
//     cin >> m >> n;

//     if (m < n)
//     {
//         cout << "<" << endl;
//     }
//     else if (m > n)
//     {
//         cout << ">" << endl;
//     }
//     else

//     {
//         cout << "=" << endl;
//     }
// }
// int main() // MAIN DEFINATION
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }
