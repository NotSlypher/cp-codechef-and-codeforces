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
	for(int test = 0; test < t; ++test)
	{
		ll a[3][4], b[4], sum = 0, p = 1000000;
		for (auto& i : a)
			for (ll& j : i)
				cin >> j;
		for (ll j = 0; j < 4; ++j)
			b[j] = min(min(a[1][j], a[0][j]), a[2][j]);
		for (ll i = 0; i < 4; ++i)
		{
			b[i] = min(b[i] , p);
			p -= b[i];
		}
		cout << "Case #" << test + 1 << ": ";
		if (p == 0)
			for (auto b1 : b)
				cout << b1 << " ";
		else
			cout << "IMPOSSIBLE";
		cout << endl;
	}
	return 0;
}
