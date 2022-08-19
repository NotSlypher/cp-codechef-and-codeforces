/*
Slypherx - Ayush Gupta
Pune Institute of Computer Technology
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define dou double
#define vll vector<ll>
#define vin(v,n)     for(ll i=0;i<n;i++){ll x; cin>>x; v.push_back(x);}
#define all(xx)       xx.begin(), xx.end()

const int MOD = 1e9 + 7;
int fpow(int x, int y);
int gcd(int a, int b);

void Slypher()
{
	ll a, b, c, d;
	cin >> a >> b >> c >> d;
	ll e =  (c * b);
	ll f =  (a * d);
	if (a * d == c * b)
		cout << "0\n";
	else
	{
		ll ans = 2;
		if(e != 0 || f != 0)
		{
			if(e != 0) {
				if (f % e == 0)
					ans = 1;
			}
			if (f != 0)
			{
				if (e % f == 0)
					ans = 1;
			}
		}
		else
			ans = 2;
		cout << ans << endl;
	}
	
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	for (int test = 1; test <= t; ++test)
	{
		Slypher();
	}
	return 0;
}

int fpow(int x, int y)
{
	x = x % MOD;
	int sum = 1;
	while (y)
	{
		if (y & 1)sum = sum * x;
		sum %= MOD;
		y = y >> 1;
		x = x * x;
		x %= MOD;
	}
	return sum;
}

int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}
