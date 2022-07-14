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
	while (t--)
	{
		ll n, cnt = 0;
		cin >> n;
		map<ll, ll> a;
		for (int i = 0; i < n; ++i)
		{
			ll temp;
			cin >> temp;
			a[temp]++;
		}
		ll tot = n;
		for (auto x : a)
			if (x.second % 2) 
				tot++;
		if (tot / 2 % 2)
			tot += 2;
		cout << tot - n << endl;
	}
	return 0;
}
