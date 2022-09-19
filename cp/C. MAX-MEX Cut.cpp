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

int solve(string s) {
	int ans = count(s.begin(), s.end(), '0');
	int n = s.size();
	bool a = false, b = false;
	for (int i = 0; i < n; ++i) {
		if (s[i] == '0') a = true;
		if (s[i] == '1') b = true;
		if (a && b) {
			++ans;
			a = b = false;
		}
	}
	return ans;
}

void Slypher()
{
	ll n, ans = 0;
	string a, b;
	cin >> n >> a >> b;
	string s;
	for (int i = 0; i < n; ++i) {
		if (a[i] != b[i]) {
			ans += 2 + solve(s);
			s = "";
		}
		else {
			s += a[i];
		}
	}
	cout << ans + solve(s) << '\n';
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
