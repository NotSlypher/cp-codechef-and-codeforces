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

#define dopos a[i] = max(0ll, a[i]);

void Slypher()
{
	ll n, x, y, mxnum, ceilnum, sumsubs = 0, ans = 0;
	cin >> n >> x >> y;
	vll a;
	vin(a, n);
	mxnum = *max_element(all(a));
	if (x<=y)
	{
		if (mxnum <= 0)
			cout << "0\n";
		else
			cout << (mxnum + y - 1) / y << endl;
	}
	else
	{
		for (int i = 0; i < n; ++i)
			dopos;
		for (ll i = n - 1ll; i >= 0; --i)
		{
			a[i] -= sumsubs;
			dopos;
			ceilnum = (a[i] + x - 1) / x;	
			sumsubs += y * ceilnum;
			ans += ceilnum;
		}
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
