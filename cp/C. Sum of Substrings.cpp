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
	ll n, k;
	cin >> n >> k;
	string s, str;
	cin >> s;
	// auto pos1 = s.find_last_of('1');
	// while(k)
	// {
	// 	k = max((ll)0, (ll)(k - (n-pos1-1)));
	// 	if(pos1!=n-1)
	// 		swap(s[pos1], s[pos1 + k]);
	// 	if (pos1 != 0)
	// 		pos1 = s.find_last_of('1', pos1 - 1);
	// 	if (pos1 == string::npos)
	// 		break;
	// }
	// for (int i = 0; i < n - 1; ++i)
	// {
	// 	sum += (s[i] - '0') * 10 + (s[i + 1] - '0');
	// }
	// cout << sum << endl;
	priority_queue<int> veca;
	priority_queue<int> vecb;
	for (int i = 0; i < n; i++)
	{

		if (s[i] == '0' && (s[i + 1] == '1' || s[i - 1] == '1'))
		{
			veca.push(i);
		}
		else if (s[i] == '1' && (s[i + 1] == '0' || s[i - 1] == '0'))
		{
			vecb.push(i);
		}
	}
	int i = 0, j = 0;

	for (int l = 1; l <= k; l++)
	{
		if (veca.empty())
		{
			break;
		}
		if (abs(vecb.top() - veca.top()) == 1)
		{
			swap(s[vecb.top()], s[veca.top()]);
			veca.pop();
			veca.push(vecb.top());
			vecb.pop();
		}
	}
	long long int sum = 0;
	for (int i = 0; i < n - 1; i++)
	{
		string str;
		for (int j = i; j <= i + 1; j++)
		{
			str.push_back(s[j]);
		}
		sum = sum + stoi(str);
		str.clear();
	}
	cout << sum << endl;

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
