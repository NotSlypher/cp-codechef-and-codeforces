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
	int t;
	cin >> t;
	while (t--)
	{
		ll n, x, y, cost;
		string s;
		cin >> n >> x >> y >> s;
		sort(all(s));
		if (s[0] != s[n - 1])
			cout << min(x, y) << endl;
		else
			cout << 0 << endl;
	}
	return 0;
}
