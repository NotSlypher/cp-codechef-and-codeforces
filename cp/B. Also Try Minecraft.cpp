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
	ll n, m, s, e, dmgf = 0, dmgb = 0, ans;
	cin >> n >> m;
	vll col,d,df,db;
	vin(col, n);
	for (int i = 0; i < n - 1; ++i)
	{
		d.push_back(col[i] - col[i+1]);
		dmgf += max(0ll, d[i]);
		df.push_back(dmgf);
		dmgb += max(0ll, -d[i]);
		db.push_back(dmgb);
	}
	while(m--)
	{
		cin >> s >> e;
		
		if(s<e)
		{
			if (s == 1)
				ans = df[e - 2];
			else
				ans = df[e - 2] - df[s - 2];
		}
		else
		{
			if (e == 1)
				ans = db[s - 2];
			else
				ans = db[s - 2] - db[e - 2];
		}
		cout << ans << endl;
	}
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
