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
	string s;
	ll cnt = 0, q = 0;
	cin >> s;

	for (char c : s)
	{
		if (c == '(')
			cnt--;
		else if (c == ')')
			cnt++;
		else
			q++;
	}

	ll open = (cnt + q) / 2, close = (q - cnt) / 2;

	if(open == 0 || close == 0)
	{
		cout << "YES\n";
		return;
	}

	string check = string(open - 1, '(') + string(1, ')') + string(1, '(') + string(close - 1, ')');

	ll i = 0;

	for (char &c : s)
	{
		if (c == '?')
			c = check[i++];
	}
	cnt = 0;

	for (char c : s)
	{
		c == '(' ? cnt++ : cnt--;
		if(cnt < 0)
		{
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
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
