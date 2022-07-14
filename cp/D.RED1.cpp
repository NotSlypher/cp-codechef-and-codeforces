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
	ll n, cnt = 0;
	cin >> n;
	if(n==1)
	{
		cout << 0;
		return;
	}
	while(n%2 == 0)
	{
		n /= 2;
		cnt++;
	}
	if(cnt==0)
	{
		cout << 1;
		return;
	}
	else if(cnt%2==1)
	{
		cout << -1;
		return;
	}
	ll x = sqrt(n);
	if(x*x==n)
	{
		cout << 1;
		return;
	}
	cout << 2;
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
		cout << endl;
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
