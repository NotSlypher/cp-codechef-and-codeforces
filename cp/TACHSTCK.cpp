#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vii vector<vector <int>>

int main()
{
	int t = 1;
	while (t--)
	{
		ll n, d, a[100000], ans = 0;
		cin >> n >> d;
		for (int i = 0; i < n; ++i)
			cin >> a[i];
		sort(a, a + n);
		for (int i = 0; i < n-1;)
		{
			if (a[i + 1] - a[i] <= d)
			{
				ans++;
				i += 2;
			}
			else
				i++;
		}
		cout << ans << endl;
	}
	return 0;
}