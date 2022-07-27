﻿/*
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

void Slypher()
{
	ll n, temp = 1;
	cin >> n;
	if(n == 2)
	{
		cout << -1 << endl;
		return;
	}
	vector<vll> a(n);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			a[i].push_back(temp);
			if (i % 2 == 0)
			{
				if (j == n - 1)
					temp++;
				else
					temp += n;
			}
			else
			{
				if (j == 0)
					temp -= n * (n - 1);
				else if (j == n - 1)
					temp -= n * (n - 2) - 1;
				else
					temp += n;
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << a[i][j] << " ";
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
