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
		ll n, q, l, r, arr[100000];
		string s;
		map<ll, ll> pos;
		cin >> n >> s >> q;
		for (int i = 0; i < n; ++i)
		{
			if (pos.count(s[i]) > 0) {
				arr[i] = pos[s[i]];
			}
			else {
				pos[s[i]] = i + 1;
				arr[i] = pos[s[i]];
			}
		}
		for (int i = 0; i < q; ++i)
		{
			cin >> l >> r;
			ll sum = accumulate(arr + l - 1, arr + r, 0);
			cout << sum << endl;
		}
	}
	return 0;
}
