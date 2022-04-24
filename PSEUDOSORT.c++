#include <bits/stdc++.h>
using namespace std;

bool checkSorted(int n, int arr[])
{
    // Create a sorted copy of original array
    int b[n];
    for (int i = 0; i < n; i++)
        b[i] = arr[i];
    sort(b, b + n);

    // Check if 0 or 1 swap required to
    // get the sorted array
    int ct = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] != b[i])
            ct++;
    if (ct == 0 || ct == 2)
        return true;
    else
        return false;
}

// Driver Program to test above function
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        // int n = sizeof(arr) / sizeof(arr[0]);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (checkSorted(n, arr))
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
