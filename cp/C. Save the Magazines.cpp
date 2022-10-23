/*
Slypherx - Ayush Gupta
Pune Institute of Computer Technology
*/

#include <iostream>
#include <vector>
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
	ll n;
	cin >> n;
	string s;
	cin >> s;
	vector<long long> a;
	vin(a, n);
	vector<pair<ll, ll>> ld;
	for (int i = 0; i < n; ++i)
		ld.push_back(make_pair(a[i], s[i] - '0'));
	ll curr_min = 1e4, zero_to_rep = 0, sum = 0;
	for (int i = 0; i < n; ++i)
		sum += ld[i].first * ld[i].second;
	for (int i = 0; i < n - 1; ++i)
	{
		if(i == 0 && ld[i].second == 0)
		{
			zero_to_rep = ld[i].first;
			curr_min = 1e4;
		}
		else if (ld[i].second == 0)
		{
			if (curr_min < zero_to_rep)
			{
				sum -= curr_min;
				sum += zero_to_rep;
			}
			zero_to_rep = ld[i].first;
			curr_min = 1e4;
		}
		else
		{
			curr_min = min(curr_min, ld[i].first);
		}
	}
	if(ld[n - 1].second == 1)
	{
		curr_min = min(curr_min, ld[n - 1].first);
		if (curr_min < zero_to_rep)
		{
			sum -= curr_min;
			sum += zero_to_rep;
		}
	}
	else
	{
		if (curr_min < zero_to_rep)
		{
			sum -= curr_min;
			sum += zero_to_rep;
		}
	}
	cout << sum << endl;
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
