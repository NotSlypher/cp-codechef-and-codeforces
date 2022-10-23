/*
Slypherx - Ayush Gupta
Pune Institute of Computer Technology
*/

#include <iostream>
#include <string>
// #include<bits/stdc++.h>
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
	ll n, o = 1, f = 0, a, b;
	cin >> n;
	string s, p;
	cin >> s;
	for (int i = 0; i < n; ++i)
	{
		if (s[i] == '1' || f)
		{
			f = 1;
			p += s[i];
		}
	}
	s = p;
	n = p.length();
	if (n == 0)
	{
		cout << "0\n";
		return;
	}
	p = "";
	for (int i = 2; i <= n; ++i)
	{
		ll x = n - o + 1;
		ll y = n - i + 1;
		for (int j = min(x, y); j <= n; ++j)
		{
			if (s[j - 1] == '0')
			{
				if (j >= x)
					a = s[j - x] == '1';
				else
					a = 0;
				if (j >= y)
					b = s[j - y] == '1';
				else
					b = 0;
				if (a < b)
					o = i;
				if (a != b)
					break;
			}
		}
	}
	for (int i = 1; i <= n; ++i)
		p += to_string(((i >= n - o + 1 && s[i - n + o - 1] == '1') | (int(s[i - 1]) - 48)) + 48);
	cout << p << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t = 1;
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
