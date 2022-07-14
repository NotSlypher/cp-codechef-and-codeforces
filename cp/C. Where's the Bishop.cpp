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
	ll n = 8, row = 0, col = 0;
	char pos[8][8];
	for (int i = 0; i < 8; ++i)
		for (int j = 0; j < 8; ++j)
			cin >> pos[i][j];
	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 8; ++j) {
			if (i - 1 >= 0 && j - 1 >= 0 && i + 1 < n && j + 1 < n) {

				if ( pos[i + 1][j + 1] == '#' && pos[i][j] == '#' && pos[i - 1][j - 1] == '#' && pos[i - 1][j + 1] == '#' && pos[i + 1][j - 1] == '#') {

					row = i + 1;
					col = j + 1;
					break;

				}

			}

			if (row != 0 && col != 0) {

				break;

			}

		}

	}
	cout << row << " " << col << endl;
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
