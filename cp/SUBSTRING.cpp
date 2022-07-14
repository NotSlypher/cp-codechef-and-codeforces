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
		string s;
		cin >> s;
		ll cnt = 0, ans = 0;
		for (int i = 0; i < s.length(); ++i)
		{
			if (s[i] != s[0] && s[i] != s[s.length() - 1])
				cnt++;
			else
				cnt = 0;
			ans = max(ans, cnt);
		}
		if (ans > 0)
			cout << ans << endl;
		else
			cout << -1 << endl;
	}
	return 0;
}
