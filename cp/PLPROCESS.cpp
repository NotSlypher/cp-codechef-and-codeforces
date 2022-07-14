#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vii vector<vector <int>>

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		ll n, a[100000], sl = 0, sh = 0;
		cin >> n;
		for (ll i = 0; i < n; ++i)
		{
			cin >> a[i];
			sh += a[i];
		}
		ll i = 0;
		while (sl < sh)
		{
			if (max(sl + a[i],  sh - a[i]) > max(sl,sh))
				break;
			sl += a[i];
			sh -= a[i];
			i++;
		}
		cout << max(sl, sh) << endl;
	}
	return 0;
}

