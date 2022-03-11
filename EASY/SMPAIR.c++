// #include <bits/stdc++.h> // HEADER FILE
// #include <algorithm>
// #include <iostream>
// using namespace std;

// // Function returns the second
// // largest elements

// // { Driver Code Starts.

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         long long int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         sort(arr, arr + n);
//         cout << arr[0] + arr[1] << endl;
//     }
//     return 0;
// }
// // } Driver Code Ends

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    long long int n, i, sum1 = 0, p, j;
    while (t--)
    {
        cin >> n;
        long long int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);
        cout << a[0] + a[1] << endl;
    }
    return 0;
}