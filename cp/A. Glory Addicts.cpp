/*
Slypherx - Ayush Gupta
Pune Institute of Computer Technology
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<ll>
#define vin(v,n)     for(ll i=0;i<n;i++){ll x; cin>>x; v.push_back(x);}
#define all(xx)       xx.begin(), xx.end()

const int MOD = 1e9 + 7;
int fpow(int x, int y);
int gcd(int a, int b);
int test = 1;

void Slypher()
{
	ll n;
	cin >> n;
	vll f, c;
	vector < pair<ll, ll>> inp;
	for (int i = 0; i < n; ++i)
	{
		ll t, d;
		cin >> t >> d;
		inp.push_back(make_pair(t, d));
	}
	for (int i = 0; i < n; ++i)
	{
		if (inp[i].first)
			c.push_back(inp[i].second);
		else
			f.push_back(inp[i].second);
	}
	sort(all(c));
	sort(all(f));
	ll ans = 0;
	while()
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	for (test = 1; test <= t; ++test)
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
