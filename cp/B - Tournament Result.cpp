/*
Slypherx - Ayush Gupta
Pune Institute of Computer Technology
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<ll>
#define vin(v,n)     for(ll i=0;i<n;i++){char x; cin>>x; v.push_back(x);}
#define all(xx)       xx.begin(), xx.end()

const int MOD = 1e9 + 7;
int fpow(int x, int y);
int gcd(int a, int b);

void Slypher()
{
	ll n;
	cin >> n;
	vector<vector<char>> a(n);
	for (int i = 0; i < n; ++i)
	{
		vin(a[i], n);
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(i != j)
			{
				if ((a[i][j] == 'W' && a[j][i] != 'L') || (a[i][j] == 'L' && a[j][i] != 'W') || (a[i][j] == 'D' && a[j][i] != 'D'))
				{
					cout << "incorrect\n";
					return;
				}
			}
			else
			{
				if(a[i][j] != '-')
				{
					cout << "incorrect\n";
					return;
				}
			}
		}
	}
	cout << "correct\n";
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
