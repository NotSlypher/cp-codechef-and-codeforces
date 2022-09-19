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
	ll n, x, y;
	cin >> n >> x >> y;
	ll q = max(x, y);
	if ((x == 0 && y == 0) || (x != 0 && y != 0)) {
		cout << "-1\n";
		return;
	}
	if((n - 1) % q != 0)
		cout << "-1\n";
	else
	{
		ll p = 1;
		y = 0;
		for(int i = 0; i < n - 1; ++i)
		{
			if (y == q) {
				p = i + 2;
				y = 0;
			}
			y++;
			cout << p << " ";
		}
		cout << endl;
	}
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
