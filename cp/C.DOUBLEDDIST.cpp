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
	bool f = true;
	cin >> n;
	vll nums, diff;
	vin(nums, n);
	sort(all(nums));
	for (int i = 1; i < n; ++i)
		diff.push_back(nums[i] - nums[i - 1]);
	for (int i = 1; i < n - 1; ++i)
	{
		if (diff[i] != 2 * diff[i - 1] && 2 * diff[i] != diff[i - 1]) {
			f = false;
			break;
		}
	}
	cout << (f ? "YES\n" : "NO\n");
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
