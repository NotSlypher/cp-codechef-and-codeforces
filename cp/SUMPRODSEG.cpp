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

#define check if (low.first <= low.second){ flag = true; break;}

void Slypher()
{
	ll x, y;
	vll a;
	pair<ll, ll> low, high;
	bool flag = 0;
	cin >> x >> y;
	for (ll i = 1; i <= sqrt(y); ++i)
		if (y % i == 0)
			y / i == i ? a.push_back(i) : a.push_back(i), a.push_back(y / i);
	sort(all(a));
	for (long long value : a)
	{
		if (value <= y / value)
		{
			high = { value, y / value };
			low = { x - (value - 1), value - 1 };
			check
			low = { y / value + 1, x - (y / value + 1) };
			check
		}
		else
			break;
	}
	flag ? cout << low.first << " " << low.second << endl << high.first << " " << high.second << endl :cout << -1 << endl;
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
