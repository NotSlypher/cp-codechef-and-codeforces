﻿	#include<bits/stdc++.h>
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
			ll x;
			cin >> x;
			ll a = x & ~(x - 1);
			if (x & 1 || x == a)
				cout << -1 << endl;
			else
				cout << a / 2 << " " << x / 2 << " " << (x - a) / 2 << endl;
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
