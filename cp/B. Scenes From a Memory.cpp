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

bool prime[100];

void Slypher()
{
	ll n;
	string s;
	cin >> n >> s;
	for (int i = 0; i < n; ++i)
		if(s[i] == '1' || s[i] == '4' || s[i] == '6' || s[i] == '8' || s[i] == '9')
		{
			cout << "1 \n" << s[i] << endl;
			return;
		}
	for (int i = 0; i < n; ++i)
		for (int j = i + 1; j < n; ++j)
			if(!prime[(s[i] - '0') * 10 + s[j] - '0'])
			{
				cout << "2\n" << s[i] << s[j] << endl;
				return;
			}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	for (int i = 0; i < 100; ++i)
	{
		prime[i] = true;
		for (int j = 2; j * j <= i; ++j)
			if (i % j == 0)
				prime[i] = false;
	}

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
