// A simple C++ program to find max product pair in
// an array of integers
#include <bits/stdc++.h>
using namespace std;

// Function to find maximum product pair in arr[0..n-1]
// void maxProduct(int arr[], int n)
// {
//     if (n < 2)
//     {
//         // cout << "No pairs exists\n";
//         return;
//     }

//     // Initialize max product pair
//     int a = arr[0], b = arr[1], count = 0;

//     // Traverse through every possible pair
//     // and keep track of max product
//     for (int i = 0; i < n; i++)
//         for (int j = i + 1; j < n; j++)
//             if (arr[i] * arr[j] > 0)
//                 a = arr[i], b = arr[j];
//     count++;
//     // if (arr[i] * arr[j] > a * b)
//     // a = arr[i], b = arr[j];

//     cout << count + 1 << endl;
// }

// Driver program to test
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long k;
        cin >> k;
        long long zero = 0, pos = 0, neg = 0;
        long long num;
        while (k--)
        {
            cin >> num;
            if (num == 0)
            {
            }
            else if (num > 0)
            {
                pos++;
            }
            else
            {
                neg++;
            }
        }
        pos--;
        neg--;
        long long ans = 0;

        if (pos > 0)
            ans = ((pos) * (pos + 1) / 2);
        if (neg > 0)
            ans += neg * (neg + 1) / 2;
        cout << ans << endl;
    }

    return 0;
}
