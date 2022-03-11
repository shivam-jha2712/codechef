#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;

void printDiagonalSums(int mat[][MAX], int n)
{
    int principal = 0, secondary = 0;
    for (int i = 0; i < n; i++)
    {
        principal += mat[i][i];
        secondary += mat[i][n - i - 1];
    }

    cout << principal + secondary << endl;
}

// Driver code
int main()
{

    int a[][MAX] = {{1, 2}, {2, 3}};
    printDiagonalSums(a, 2);
    return 0;
}