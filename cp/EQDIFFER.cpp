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
		ll n, mx = 0;
		cin >> n;
		map<ll, ll> freq;
		for (ll i = 0; i < n; ++i)
		{
			ll temp;
			cin >> temp;
			freq[temp]++;
		}
		for (auto value : freq)
			mx = max(mx, value.second);
		if (mx >= 2)
			cout << n - mx << endl;
		else
			if(n>2)
				cout << n - 2 << endl;
			else
				cout << 0 << endl;
	}
	return 0;
}
