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
	int n;
	cin >> n;
	vll a;
	vin(a, n);

	ll x = 0, y = 0, cnt = 0;
	for(int i = 0; i < n; i++)
	{
		if (a[i] & 1) y++;
		else x++;
	}

	if (y > 0)
	{
		cout << (x) << endl;
		return;
	}
	else
	{
		ll mn = INT_MAX;
		for(int i = 0; i < n; i++)
		{
			if (a[i] % 2 == 0)
			{
				cnt = 0;
				while (a[i] % 2 == 0)
				{
					cnt++;
					a[i] = a[i] / 2;
				}

				mn = min(mn, cnt);
			}
		}

		cout << (mn + x - 1) << endl;
	}

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
