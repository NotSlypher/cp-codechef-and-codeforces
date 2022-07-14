#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vin(v,n)     for(ll i=0;i<n;i++){int x; cin>>x; v.push_back(x);}
#define vll vector<ll>
#define all(xx)       xx.begin(), xx.end()

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t = 1;
	while (t--)
	{
		ll n;
		cin >> n;
		vll a;
		vin(a, n);
		ll cnt = 0;
		vector<pair<ll, ll>> x;
		for (ll i = 0; i < n; ++i)
		{
			ll min = *min_element(a.begin() + i, a.end());
			if (a[i] != min)
			{
				ll pos = distance(a.begin(), find(a.begin(), a.end(), min));
				x.push_back(make_pair(i, pos));
				swap(a[i], a[pos]);
				cnt++;
			}
		}
		cout << cnt << endl;
		for (ll i = 0; i < cnt; ++i)
		{
			cout << x[i].first << " " << x[i].second << "\n";
		}
	}
	return 0;
}
