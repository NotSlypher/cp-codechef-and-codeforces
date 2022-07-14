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
		cin >> n;
		string s;
		cin >> s;
		for (ll i = 0; i < n; )
		{
			if (s[i] == s[i + 1])
			{
				cnt++;
				i += 2;
			}
			else {
				cnt++;
				i++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
