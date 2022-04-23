#include <bits/stdc++.h> // HEADER FILE
#include <iostream>
using namespace std;

// void solve()
// {

// }

int main()
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while (t--)
    {
        // solve();
        long long n, number, answer = 0, count = 0, visited = 0;
        cin >> n;
        vector<long long> V;
        while (n--)
        {
            long long input;
            cin >> input;
            V.push_back(input);
            if (input == 2)
                count++;
            if (input == 1)
                visited++;
        }
        for (int j = 0; j < V.size(); j++)
        {
            if (V[j] == 1)
            {
                answer += V.size() - (j + 1);
                visited--;
            }
            else
            {
                answer += visited;
            }
        }
        count--;
        cout << answer + (count * (count + 1) / 2) << "\n";
    }
    return 0;
}
