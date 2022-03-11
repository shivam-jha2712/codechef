#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

int main() // MAIN DEFINATION
{

    int a, b, c;

    cin >> a >> b >> c;

    if (a + b > c && b + c > a && c + a > b)
    {
        if (a == b && b == c && c == c)
        {
            printf("1\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("2\n");
        }
        else if (a != b && b != c && c != a)
        {
            printf("3\n");
        }
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}

// #include <bits/stdc++.h> // HEADER FILE

// #include <iostream>
// using namespace std;

// void solve()
// {
//     int n;
//     cin >> n;

//     if (n < 10)
//     {
//         cout << "Thanks for helping Chef!" << endl;
//     }
//     else
//     {
//         cout << "-1" << endl;
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
