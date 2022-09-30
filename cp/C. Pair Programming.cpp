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
	ll k, n, m;
	cin >> k >> n >> m;
	vll a, b, res;
	vin(a, n);
	vin(b, m);

	ll pos1 = 0;
	ll pos2 = 0;
	bool ok = 1;
	while(pos1 != n || pos2 != m)
	{
		if(pos1 != n && a[pos1] == 0)
		{
			res.push_back(0);
			k++;
			pos1++;
		}
		else if(pos2 != m && b[pos2] == 0)
		{
			res.push_back(0);
			k++;
			pos2++;
		}
		else if (pos1 != n && a[pos1] <= k) {
			res.push_back(a[pos1++]);
		}
		else if (pos2 != m && b[pos2] <= k) {
			res.push_back(b[pos2++]);
		}
		else {
			std::cout << -1 << '\n';
			ok = false;
			break;
		}
	}

	if (ok) {
		for (int cur : res)
			std::cout << cur << ' ';
		std::cout << std::endl;
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
