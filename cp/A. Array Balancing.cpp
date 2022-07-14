#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<ll>
#define vin(v,n)     for(ll i=0;i<n;i++){ll x; cin>>x; v.push_back(x);}
#define all(xx)       xx.begin(), xx.end()

const int MOD = 1e9 + 7;
int fpow(int x, int y);
int gcd(int a, int b);


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	for (int test = 1; test <= t; ++test)
	{
		ll n, sum = 0;
		cin >> n;
		vll a, b, y;
		vin(b, n);
		vin(y, n);
		for (int i = 0; i < n; ++i)
			a.push_back(b[i]);
		for (int i = 0; i < n; ++i)
			a.push_back(y[i]);
		for (int i = 0; i < n; ++i)
			if(a[i] > a[i + n]) 
				swap(a[i], a[i + n]);
		for (int i = 1; i < 2*n; ++i)
			sum += (i == n  ? 0 : abs(a[i] - a[i - 1]));
		cout << sum << endl;
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
