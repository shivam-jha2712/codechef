#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long es = 0;
    long long os = 0;
    int count = 0;
    for (int i = 2; count < n; ++i)
    {
        if (i % 2 == 0)
        {
            es = es + i;
            count++;
        }
    }
    count = 0;
    for (int i = 1; count < n; ++i)
    {
        if (i % 2 != 0)
        {
            os = os + i;
            count++;
        }
    }
    cout << os << " " << es << endl;
}