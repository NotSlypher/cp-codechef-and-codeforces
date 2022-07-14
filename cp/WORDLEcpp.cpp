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
		string s, t, m;
		cin >> s >> t;
		m = t;
		for (int i = 0; i < 5; ++i)
		{
			if (s[i] == t[i])
				m[i] = 'G';
			else
				m[i] = 'B';
		}
		cout << m << endl;
	}
	return 0;
}
