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
		ll n, cnt = 0;
		string s;
		cin >> n >> s;
		string p = s;
		sort(all(s));
		for (int i = 0; i < n; ++i)
			if (p[i] != s[i]) 
				swap(p[i], p[n - i - 1]);
		if (s == p)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
