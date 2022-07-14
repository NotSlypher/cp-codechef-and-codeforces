#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vin(v,n)     for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}
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
		ll n, m, x;
		vector<pair<ll, ll>> a;
		cin >> n >> m >> x;
		for (ll i = 0; i < n; ++i)
		{
			ll temp;
			cin >> temp;
			a.push_back({ temp,i + 1 });
		}
		sort(a.rbegin(), a.rend());
		vll ans;
		for (int i = 0; i < a.size(); ++i)
			if (a[i].first >= m || ans.size() < x)
				ans.push_back(a[i].second);
		sort(all(ans));
		cout << ans.size() << " ";
		for (int j = 0; j < ans.size(); ++j)
			cout << ans[j] << " ";
		cout << endl;
	}
	return 0;
}
