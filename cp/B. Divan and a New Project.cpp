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
	ll n, c = 1, s = 0, x = 1;
	cin >> n;
	vll a;
	vin(a, n);
	vector<pair<ll, ll>> bil;
	for (int i = 0; i < n; ++i)
		bil.push_back(make_pair(a[i], i));
	sort(all(bil));
	vll b(n + 1, 0);
	for (int i = n - 1; i >= 0; --i)
	{
		if(x)
			b[bil[i].second + 1] = c;
		else
		{
			b[bil[i].second + 1] = -1 * c;
			c++;
		}
		x ^= 1;
	}
	for (int i = 0; i < n; ++i)
		s += a[i] * abs(b[i + 1]);
	cout << 2 * s << endl;
	for (int i = 0; i < n + 1; ++i)
		cout << b[i] << " ";
	cout << endl;
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
