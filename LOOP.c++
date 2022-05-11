// C++ implementation of simple method to find
// minimum difference between any pair
#include <bits/stdc++.h>
using namespace std;

// Returns minimum difference between any pair
int findMinDiff(int arr[], int n)
{
    // Initialize difference as infinite
    int diff = INT_MAX;

    // Find the min diff by comparing difference
    // of all possible pairs in given array
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (abs(arr[i] - arr[j]) < diff)
                diff = abs(arr[i] - arr[j]);

    // Return min diff
    if (diff == 0)
    {
        return 1;
    }
    else
    {
        return diff;
    }
}

// Driver code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 3;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        cout << findMinDiff(arr, n) << endl;
    }

    return 0;
}
