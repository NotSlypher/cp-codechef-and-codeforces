#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long int
#define vin(v,n)     for(ll i=0;i<n;i++){ll x; cin>>x; v.push_back(x);}
#define vll vector<ll>
#define all(xx)       xx.begin(), xx.end()

bool cmp(const pair<ll, ll>& x, const pair<ll, ll>& y)
{
	if (x.second == y.second)
		return (x.first < y.first);
	else
		return (x.second > y.second);
}


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
		vll a, b;
		vin(a, n);
		vin(b, n);
		vector<pair<ll, ll>> x;
		for (int i = 0; i < n; ++i)
			x.push_back(make_pair(a[i], b[i]));
		sort(x.begin(), x.end(), cmp);
		for (int i = 0; i < n; ++i)
			cout << x[i].first << " " << x[i].second << endl;
	}
	return 0;
}
