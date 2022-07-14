#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vin(v,n)     for(ll i=0;i<n;i++){ll x; cin>>x; v.push_back(x);}
#define vll vector<ll>
#define all(xx)       xx.begin(), xx.end()

ll n, m, c;

bool solve(vll a, vll b)
{
	int diff = max(a.back() - c, (ll)0);
	return (diff < b.size() && (diff == 0 || b[diff - 1] <= c) && (b.back() + diff - (ll)a.size() <= c));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	for (int test = 1; test <= t; ++test)
	{
		cin >> n >> m >> c;
		vll a, b;
		vin(a, n);
		vin(b, m);
		if (solve(a, b) || solve(b, a))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	return 0;
}
