#include <bits/stdc++.h> //HEADER FILE INCLUSION
#include <vector>        //HEADER FILE INCLUSION

using namespace std;
#define Loop(x, n) for (long long int i = x; i < n; i++)
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
// Intialising the condition for Test cases on which the loop is supposed to run
#define testcase(t) long long int t;cin>>t;while(t--)

const int m = 1e6;     // Getting away with constraints of  10^6
long long int arr[m];  // Getting away with constraints of  10^9
long long int gcd1[m]; // Getting away with constraints of  10^9
long long int gcd2[m]; // Getting away with constraints of  10^9

void calgcd(long long int n)
{
    gcd1[1] = arr[1];
    gcd2[n] = arr[n];
    for (long long int i = n - 1; i > 0; i--)
    {
        gcd2[i] = __gcd(gcd2[i + 1], arr[i]);
    }
    Loop(2, n + 1)
    {
        gcd1[i] = __gcd(gcd1[i - 1], arr[i]);
    }
}
int main() //DEFINING MAIN
{
    fastIO

        testcase(t)
    {
        long long int n;
        cin >> n;
        Loop(1, n + 1)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n + 1);

        calgcd(n);

        long long int sum = 0;
        Loop(1, n + 1)
        {
            sum += arr[i];
        }
        long long int min = LLONG_MAX;
        Loop(1, n + 1)
        {
           long long int temp=(sum-arr[i]+__gcd(gcd1[i-1],gcd2[i+1]))/__gcd(gcd1[i-1],gcd2[i+1]);
            if(temp<min)
            min=temp;
        }
        cout << min << endl;
    }
}