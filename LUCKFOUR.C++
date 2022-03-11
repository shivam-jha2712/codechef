#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

int main() // MAIN DEFINATION
{
    int t;
    char a[15];
    cin >> t;
    while (t--)
    {
        cin >> a;
        int count = 0, i;
        for (i = 0; i < strlen(a); i++)
        {
            if (a[i] == '4')
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// #define ll long long

// int main()
// {
//     // your code goes here
//     ll t, n;
//     cin >> t;
//     while (t--)
//     {
//         cin >> n;
//         ll count = 0;
//         while (n > 0)
//         {
//             int mod = n % 10;
//             if (mod == 4)
//                 count++;
//             n /= 10;
//         }
//         cout << count << '\n';
//     }

//     return 0;
// }
// #include <bits/stdc++.h> // HEADER FILE

// #include <iostream>
// using namespace std;

// int FourContaining(int a)
// {
//     int count = 0;
//     while (a != 0)
//     {
//         int n = a % 10;
//         n = a / 10;
//         if (n == 4)
//         {
//             count++;
//         }
//     }
//     return count;
// }
// int main() // MAIN DEFINATION
// {
//     int t, a;
//     cin >> t;
//     while (t--)
//     {
//         cin >> a;
//         cout << FourContaining(a) << endl;
//     }

//     return 0;
// }

// Flaws need to be dealt with the second programme as the first one is based on strlen and it is cheeky