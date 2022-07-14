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
		ll n;
		string s;
		cin >> n >> s;
		vector<pair<ll, ll>> ops;
		for (int i = 0; i < n; ++i)
		{
			if (s[i] == '1')
			{
				ops.push_back({ i + 1,n - i });
				for (int j = i; j < n; ++j)
				{
					if (s[j] == '0')
						s[j] = '1';
					else
						s[j] = '0';
				}
			}
		}
		cout << ops.size() << endl;
		for (auto op : ops)
		{
			cout << op.first << " " << op.second << endl;
		}
	}
	return 0;
}
