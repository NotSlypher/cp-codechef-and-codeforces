/*
Slypherx - Ayush Gupta
Pune Institute of Computer Technology
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<ll>
#define vin(v,n)     for(ll i=0;i<n;i++){ll x; cin>>x; (x%2==0?e.push_back(x):o.push_back(x));}
#define all(xx)       xx.begin(), xx.end()

const int MOD = 1e9 + 7;
int fpow(int x, int y);
int gcd(int a, int b);

void Slypher()
{
	ll n, cnt = 0;
	vll a, e, o;
	cin >> n;
	vin(a, n);
	sort(all(e));
	sort(all(o));
	for (auto value : e)
		a.push_back(value);
	for (auto a1 : o)
		a.push_back(a1);
	for (int i = 0; i < n; ++i)
		for (int j = i + 1; j < n; ++j)
			if (gcd(a[i], 2*a[j]) > 1) cnt++;
	cout << cnt << endl;
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
