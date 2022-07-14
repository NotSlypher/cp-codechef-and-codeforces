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
	ll n,ans =0;
	string a;
	cin >> n >> a;
	for (int i = 0; i < (n)/2; ++i)
	{
		if (a[i] != a[n - 1 - i])
			ans++;
	}
	for (int i = 0; i < n/2 - 1; ++i)
	{
		if(a[i] == a[i + 1] && a[n -i - 1] == a[n- i - 2] && ((a[i] == 1 && a[n - i - 1] == 0) || (a[i] == 0 && a[n - i - 1] == 1)))
		{
			ans--;
			i++;
		}
	}
	cout << (ans+1)/2 << endl;
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
