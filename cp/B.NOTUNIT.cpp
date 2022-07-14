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
		ll a, b;
		cin >> a >> b;
        if (a % 2 == 0)
	        a + 2 <= b ? cout << a << " " << a + 2 : cout << -1;
        else if (a % 3 == 0)
	        a + 3 <= b ? cout << a << " " << a + 3 : cout << -1;
        else
	        a + 3 <= b ? cout << a + 1 << " " << a + 3 : cout << -1;
		cout << endl;
	}
	return 0;
}
