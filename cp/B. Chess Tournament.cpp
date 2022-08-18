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
	string s;
	cin >> n >> s;
	vector<char> eq, v;
	for (int i = 0; i < n; ++i)
		s[i] == '1' ? eq.push_back(i) : v.push_back(i);
	if(v.size() == 1 || v.size() == 2)
	{
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
	vector<vector<char>> mat(n, vector<char>(n, '='));
	for (int i = 0; i < n; ++i)
		mat[i][i] = 'X';
	for (int i = 0; i < v.size(); ++i)
	{
		if(i == v.size() - 1)
		{
			mat[v[i]][v[0]] = '+';
			mat[v[0]][v[i]] = '-';
		}
		else
		{
			mat[v[i]][v[i + 1]] = '+';
			mat[v[i + 1]][v[i]] = '-';
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
			cout << mat[i][j];
		cout << endl;
	}
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
