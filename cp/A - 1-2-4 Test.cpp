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
	ll a, b, q[3] = { 0,0,0 };
	cin >> a >> b;
	if (a == 1 || b == 1)
		q[0]++;
	if (a == 2 || b == 2)
		q[1]++;
	if (a == 4 || b == 4)
		q[2]++;
	if (a == 6 || b == 6)
	{
		q[1]++;
		q[2]++;
	}
	if (a == 3 || b == 3)
	{
		q[0]++;
		q[1]++;
	}
	if (a == 5 || b == 5)
	{
		q[0]++;
		q[2]++;
	}
	if (a == 7 || b == 7)
	{
		q[0]++;
		q[1]++;
		q[2]++;
	}

	ll ans = 0;
	for (int i = 0; i < 3; ++i)
		if(q[i] != 0)
			ans += pow(2, i);
	cout << ans;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t = 1;
	// cin >> t;
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
