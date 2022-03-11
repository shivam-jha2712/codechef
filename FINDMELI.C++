#include <bits/stdc++.h> // HEADER FILE

#include <iostream>
using namespace std;

int main() // MAIN DEFINATION
{
    int n, data;
    // printf("Enter the size of Array: \n");
    cin >> n >> data;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == data)
        {
            printf("1\n"); // found is a counter which was set to 0 when it finds it is switched to 1 and the statement is broken. when found
            found = 1;
            break;
        }
    }
    if (found == 0) // if not found then found(flag) is set to 0
    {
        printf("-1\n");
    }
    return 0;
}