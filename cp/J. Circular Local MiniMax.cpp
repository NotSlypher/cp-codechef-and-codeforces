/*
Slypherx - Ayush Gupta
Pune Institute of Computer Technology
*/

#include <algorithm>
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
	ll n, j= 0;
	bool f = 0;
	cin >> n;
	vector<long long> a, res(n);
	vin(a, n);
	sort(all(a));
	for (int i = 0; i < n; i += 2)
		res[i] = a[j++];
	for (int i = 1; i < n; i += 2)
		res[i] = a[j++];
	a = res;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] < a[(i + 1) % n] && a[i] < a[(i == 0 ? n - 1 : i - 1)]) continue;
		else if((a[i] > a[(i + 1) % n] && a[i] > a[(i == 0 ? n - 1 : i - 1)])) continue;
		else
		{
			f = 1;
			break;
		}
	}
	if (f)
		cout << "NO\n";
	else
	{
		cout << "YES\n";
		for (long long a1 : a)
			cout << a1 << " ";
		cout << "\n";
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
