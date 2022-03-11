#include <bits/stdc++.h> //HEADER FILE INCLUSION
#include <vector>		
using namespace std;
typedef long long int lli;
int solve()
{

	lli m, n, o;
	cin >> n;
	lli a[n];
	for (m = 0; m < n; m++)
	{
		cin >> a[m];
	}
	sort(a, a + n);
	lli m1 = a[0];
	for (m = m1; m >= 1; m++)
	{
		int c = 0;
		for (o = 0; o < n; o++)
		{
			if (a[o] % m == 0)
			{
				c++;
			}
			else
			{
				break;
			}
		}
		if (c == n)
		{
			break;
		}
		else
		{
			continue;
		}
	}

	a[n - 1] = a[0];
	int ans = 0;
	for (int t = 0; t < n; t++)
	{
		ans += (a[t] / m);
	}
	cout << ans << "\n";

	return 0;
}
int main() //DEFINING MAIN
{
	lli t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}