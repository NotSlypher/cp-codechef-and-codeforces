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

ll nof(ll n)
{
	ll cnt = 0;
	for (int i = 1; i <= n / 2; ++i)
	{
		if (n % i == 0)
			cnt++;
	}
	return cnt;
}

ll naive(ll n)
{
	ll cnt = 0, mx = 0;
	map<ll,ll> m;
	for (int i = 1; i <= sqrt(n); ++i)
	{
		if (i != n - i)
			m[gcd(i, n - i) + i * (n - i) / gcd(i, n - i)] += 2;
		else
			m[gcd(i, n - i) + i * (n - i) / gcd(i, n - i)] ++;
		mx = max(mx, m[gcd(i, n - i) + i * (n - i) / gcd(i, n - i)]);
		
	}

	return mx;
}

void Slypher()
{
	ll n;
	cin >> n;
	
		cout << ( n % 2 == 0 ? 2 * nof(n) - 1 : 2 * nof(n)) << endl;
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
