#include <stdio.h>
void solve()
{
    int n, ans = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        ans = ans + n % 10;
        n = n / 10;
    }

    printf("%d\n", ans);
}
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        solve();
    }
    return 0;
}

// C++ solution
// #include <iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;

//         int sum = 0;

//         while (n > 0)
//         {
//             sum += (n % 10);
//             n /= 10;
//         }

//         cout << sum << "\n";
//     }
//     return 0;
// }