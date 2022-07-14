#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vii vector<vector <int>>

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		set<int> a;
		cin >> n;
		for (ll i = 0; i < n; ++i)
		{
			ll c;
			cin >> c;
			a.insert(c);
		}

		cout << n - a.size() << endl;
	}
	return 0;
}
