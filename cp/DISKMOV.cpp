/*
Slypherx - Ayush Gupta
Pune Institute of Computer Technology
*/

#include <algorithm>
#include <ios>
#include <iostream>
#include <map>
#include <set>
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
	ll n, k;
	cin >> n >> k;
	vector<long long> a;
	vin(a, n);
	map<ll, ll> m;
	for (int i = 0; i < n; ++i)
	{
		m[a[i]]++;
	}
	set<ll> ms;
	for (int i = 0; i < 2*n; ++i)
		ms.insert(i + 1);
	for (int i = 0; i < n; ++i)
		ms.erase(a[i]);
	ll mx = *max_element(all(a));
	if (k == 1)
	{
		cout << mx - *ms.begin() << endl;
		return;
	}
	ll res1 = 0, res2 = 0;
	for (int i = 0; i < k; ++i)
	{
		ll x = *(ms.rbegin() - i);
		a.push_back(x);
		m[a[n - i - i]] = 1;
		mx = m.rbegin()->first;
		res1 += mx - x;
	}
	for (int i = 0; i < k; ++i)
	{
		ll x = *(ms.rend() - i);
		a.push_back(x);
		m[a[n - i - i]] = 1;
		mx = m.rbegin()->first;
		res1 += mx - x;
	}
	cout << max(res1,res2) << endl;
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
