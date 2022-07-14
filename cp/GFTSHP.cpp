#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vin(v,n)     for(ll i=0;i<n;i++){double x; cin>>x; v.push_back(x);}
#define vll vector<ll>
#define all(xx)       xx.begin(), xx.end()

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		ll n, x;
		cin >> n >> x;
		vll costs;
		vin(costs, n);
		sort(all(costs));
		ll i = 0, sum = 0, ans = 0;
		while (i < n && sum + costs[i] <= x)
		{
			ans++;
			sum += costs[i];
			i++;
		}
		if (i < n && sum + (costs[i] + 1) / 2 <= x)
			ans++;
		cout << ans << endl;
	}
	return 0;
}
