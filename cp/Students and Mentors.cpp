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
int test;

void Slypher()
{
	ll n;
	bool f = 0;
	cin >> n;
	vll r, b;
	vin(r, n);
	b = r;
	sort(all(b), greater<>());
	for (int i = 0; i < n; ++i)
	{
		f = 0;
		for (int j = 0; j < n - 1; ++j)
		{
			if(b[j] <= 2 * r[i])
			{
				f = 1;
				if (b[j] == r[i])
				{
					r[i] = b[j + 1];
				}
				else
					r[i] = b[j];
				break;
			}
		}
		if (f == 0) r[i] = -1;
	}
	cout << "Case #" << test << ": ";
	for (int i = 0; i < n; ++i)
		cout << r[i] << " ";
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
