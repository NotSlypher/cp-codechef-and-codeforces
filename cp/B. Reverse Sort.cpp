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
	int n; cin >> n;
	string s; cin >> s;
	if (is_sorted(s.begin(), s.end()))
	{
		cout << 0 << "\n";
		continue;
	}

	string t = s;
	sort(t.begin(), t.end());
	cout << 1 << "\n";
	vector<int> ans;
	for (int i = 0; i < n; i++)
	{
		if (s[i] != t[i])
			ans.push_back(i + 1);
	}
	cout << ans.size() << " ";
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " \n"[i + 1 == ans.size()];
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
