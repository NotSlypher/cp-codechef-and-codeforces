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

void Slypher()
{
	ll n;
	cin >> n;
	vector<char> a, b, c;
	for (int i = 0; i < n; ++i)
	{
		char tmp;
		cin >> tmp;
		a.push_back(tmp);
	}
	reverse(all(a));
	for (int i = 0; i < n; ++i)
	{
		if (a[n - i - 1] == *min_element(all(a)))
		{
			c.push_back(a[n - i - 1]);
		}
		else
		{
			b.push_back(a[n - i - 1]);
		}
		a.pop_back();
		
	}
	reverse(all(b));
	ll x = b.size();
	for (int i = 0; i < x; ++i)
	{
		c.push_back(b[0]);
		b.pop_back();
	}
	for (int i = 0; i < n; ++i)
	{
		cout << c[i];
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t = 1;
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
