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
		ll n, x;
		cin >> n >> x;
		set<ll> a;
		for (int i = 0; i < n; ++i)
		{
			ll temp;
			cin >> temp;
			a.insert(temp);
		}
		ll cnt = a.size();
		cout << min(n - x, cnt) << endl;
	}
	return 0;
}

