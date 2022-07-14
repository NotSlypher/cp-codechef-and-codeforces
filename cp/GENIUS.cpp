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
		ll n, x, a, b, c;
		cin >> n >> x;
		if (x % 3 == 0)
			a = x / 3;
		else
			a = x / 3 + 1;
		b = (3 - x % 3) % 3;
		c = n - a - b;
		if (c >= 0)
			cout << "YES\n" << a << " " << b << " " << c << endl;
		else
			cout << "NO\n";
	}
	return 0;
}
