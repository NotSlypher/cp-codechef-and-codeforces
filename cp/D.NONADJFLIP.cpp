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
	for (int test = 1; test <= t; ++test)
	{
		ll cnt = 0, n;
		string s;
		cin >> n >> s;
		for (int i = 0; i < s.length() - 1; ++i)
			cnt = s[i] == s[i + 1] && s[i] == '1' ? cnt + 1 : cnt;
		if (cnt != 0 && s.find('1') != string::npos)
			cout << 2 << endl;
		else if (s.find('1') != string::npos && cnt == 0)
			cout << 1 << endl;
		else(s.find('1') == string::npos)
			cout << 0 << endl;
	}
	return 0;
}
