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
		ll n, a, b;
		cin >> n >> a >> b;
		if (abs(a - b) > 2 || a == b) {
			cout << 0 << endl;
			continue;
		}
		else
		{
			if (abs(a - b) == 1)
			{
				if (min(a, b) == 1 || max(a, b) == n)
					cout << 1 << endl;
				else
					cout << 2 << endl;
			}
			else
				cout << 1 << endl;
		}
	}
	return 0;
}
