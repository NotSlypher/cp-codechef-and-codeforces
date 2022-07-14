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
		string s, a;
		cin >> s;
		int j = 1, k = s.length() - 1;
		
		for (int i = 0; i < s.length(); ++i)
		{
			j = 1;
			if (k > 0)
			{
				while (s[i] == s[i + j])
				{
					j++;
					if (i +j > k)
						break;
				}
			}
			if (s.find_last_not_of(s[i]) != string::npos)
			{
				if (s[i] <= s[i+j]) {
					a.push_back(s[i]);
					a.push_back(s[i]);
				}
				else
					a.push_back(s[i]);
			}
			else
				a.push_back(s[i]);
		}
		cout << "Case #" << test << ": " << a << endl;
	}
	return 0;
}
