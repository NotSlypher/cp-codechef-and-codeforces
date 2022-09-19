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
	vll a;
	cin >> n;
	vin(a, n);
	vector<pair<ll, ll>> nd;
	if (n == 1)
		cout << "0\n";
	else
	{
		ll par = a[0] % 2;
		nd.push_back({ 1,n });
		((a[0] + a[n - 1]) % 2 == 1 ? a[n - 1] = a[0] : a[0] = a[n - 1]);
		for(int i = 1; i < n - 1; ++i)
		{
			if (par == 0)
				(a[i] % 2 ? nd.push_back({ 1, i + 1 }) : nd.push_back({ i + 1, n }));
			else
				(a[i] % 2 == 0 ? nd.push_back({ 1, i + 1 }) : nd.push_back({ i + 1, n }));
		}
		cout << nd.size() << endl;
		for (auto ans : nd)
			cout << ans.first << " " << ans.second << "\n";
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
