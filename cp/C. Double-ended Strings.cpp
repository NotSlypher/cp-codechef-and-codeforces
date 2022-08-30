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
	string a, b;
	cin >> a >> b;
	if(a.size() < b.size())
	{
		string temp;
		temp = a;
		a = b;
		b = temp;
	}
	std::size_t found;
	int ans = 0;
	for (int len = 1; len <= a.size(); ++len)
		for (int i = 0; i + len <= a.size(); i++) 
			for (int j = 0; j + len <= b.size(); j++) 
				if (a.substr(i, len) == b.substr(j, len)) 
					ans = max(ans, len);
	cout << a.size() + b.size() - 2 * ans << endl;
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
