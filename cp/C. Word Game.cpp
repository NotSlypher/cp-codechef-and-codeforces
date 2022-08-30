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
	ll n;
	vector<vector<string>> words(3);
	cin >> n;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			string str;
			cin >> str;
			words[i].push_back(str);
		}
	}

	map<string, ll> cnt;
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < n; ++j)
			cnt[words[i][j]]++;

	vll points(3, 0);
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (cnt[words[i][j]] == 1ll) points[i] += 3;
			else if (cnt[words[i][j]] == 2ll) points[i] += 1;
		}
	}

	for (int i = 0; i < 3; ++i)
		cout << points[i] << " ";
	cout << endl;
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
