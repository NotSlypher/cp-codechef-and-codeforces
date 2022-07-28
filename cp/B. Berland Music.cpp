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

struct node
{
	int p, q, r;
};

bool cmp(node a, node b)
{
	return a.r == b.r ? a.p < b.p : a.r > b.r;
}

bool cmp1(node a, node b)
{
	return a.q < b.q;
}

void Slypher()
{
	ll n;
	cin >> n;
	vector<node> songs(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> songs[i].p;
		songs[i].q = i + 1;
	}
	string s;
	cin >> s;
	if (n == 1)
	{
		cout << -1 << endl;
		return;
	}
	for (int i = 0; i < n; ++i)
		s[i] == '0' ? songs[i].r = 0 : songs[i].r = 1;
	sort(all(songs), cmp);
	sort(all(songs), cmp1);
	for (int i = 0; i < n; ++i)
	{
		cout << songs[i].p << " ";
	}
	cout << endl;
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
