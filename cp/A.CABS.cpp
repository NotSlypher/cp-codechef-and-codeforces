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
		ll x, y;
		cin >> x >> y;
		if (x < y)
			cout << "FIRST\n";
		else if (x > y)
			cout << "SECOND\n";
		else
			cout << "ANY\n";
	}
	return 0;
}
