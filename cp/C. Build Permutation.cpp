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
	ll n, index = n - 1;
	cin >> n;
	vll alpha, beta;
	for (int i = 0; i < n; i++)
		alpha.push_back();

	beta = alpha;
	
	while (index >= 0)
	{

		int curr_num = alpha[index];
		int actual_num = *lower_bound(all(sqrs), alpha[index]);

		int dist = actual_num - curr_num;
		reverse(beta.begin() + dist, beta.begin() + curr_num + 1);

		index = dist - 1;
	}

	for (auto x : beta)
		cout << x << ' ';
	cout << '\n';
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
