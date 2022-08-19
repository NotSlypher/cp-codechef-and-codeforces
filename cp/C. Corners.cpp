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
const int INF = 1e9;
const int MAXN = 2000;
int a[MAXN][MAXN];
void Slypher()
{
	int n, m, sum = 0;
	cin >> n >> m;
	string s;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		for (int j = 0; j < m; ++j) {
			a[i][j] = s[j] - '0';
			sum += a[i][j];
		}
	}
	int minn = INF;
	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < m - 1; ++j) {
			int cnt = a[i][j] + a[i + 1][j] + a[i][j + 1] + a[i + 1][j + 1];
			if (cnt == 0) continue;
			minn = min(minn, max(1, cnt - 1));
		}
	}
	if (sum == 0) cout << "0\n";
	else cout << 1 + sum - minn << "\n";
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
