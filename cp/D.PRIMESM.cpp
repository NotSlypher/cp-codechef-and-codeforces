#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<ll>
#define vin(v,n)     for(ll i=0;i<n;i++){ll x; cin>>x; v.push_back(x);}
#define all(xx)       xx.begin(), xx.end()

const int p = 1e9 + 7;
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
		ll a, b;
		cin >> a >> b;
		cout << (a == 1 || b == 1 ? -1 : gcd(a, b) == 1 ? 1 : 0) << endl;
	}
	return 0;
}

int fpow(int x, int y)
{
	x = x % p;
	int sum = 1;
	while (y)
	{
		if (y & 1)sum = sum * x;
		sum %= p;
		y = y >> 1;
		x = x * x;
		x %= p;
	}
	return sum;
}

int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}
