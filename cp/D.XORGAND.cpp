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

void Slypher()
{
	ll n,l,r,x,q;
	cin >> n;
	vll v;
	vin(v, n)
	int ar[n][33];
	for(int i = 1;i<=n;i++)
	{
		ll temp = v[i-1];
		for(int j = 0; j<33;j++)
			ar[i][j] = ar[i - 1][j];
		int pwr = 32;
		if (temp != 0)
			pwr = (int)log(n) / (int)log(2);
		ar[i][pwr]++;
	}

	cin >> q;
	while (q--) {
		cin >> l >> r >> x;
		int cnt = 0, pwr = 32;
		if (x != 0)
			pwr = (int)log(x) / (int)log(2);
		cnt = ar[r][pwr] - ar[l - 1][pwr];
		cout << r - l + 1 - cnt << endl;
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
