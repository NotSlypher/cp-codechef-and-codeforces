#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vin(v,n)     for(ll i=0;i<n;i++){ll x; cin>>x; v.push_back(x);}
#define vll vector<ll>
#define all(xx)       xx.begin(), xx.end()

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	for (int test = 1; test <= t; ++test)
	{
		ll n;
		cin >> n;
		vll a, b;
		vin(a, n);
		vin(b, n);
		vector<vector<ll>> treq(n);
		priority_queue<ll> best;
		for (int i = 0; i < n; ++i)
			treq[b[i]].push_back(a[i]);
		long double sum = 0, ans = 0;
		for (int i = 0; i < n; ++i)
		{
			for (auto value : treq[i])
				best.push(value);
			if (best.empty())
				break;
			sum += best.top();
			best.pop();
			ans = max(ans, sum/(long double)(i + 1));
		}
		cout << fixed << setprecision(6) << ans << endl;
	}
	return 0;
}
