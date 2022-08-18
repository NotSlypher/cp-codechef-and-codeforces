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
	long long int n, x, y, a, b, c, d;
	cin >> x;
	cin >> y;

	cin >> a;;
	long long int x1[a];
	for (int i = 0; i < a; i++) {
		cin >> x1[i];
	}
	cin >> b;
	long long int x2[b];
	for (int i = 0; i < b; i++) {
		cin >> x2[i];
	}
	cin >> c;
	long long int y1[c];
	for (int i = 0; i < c; i++) {
		cin >> y1[i];
	}
	cin >> d;
	long long int y2[d];
	for (int i = 0; i < d; i++) {
		cin >> y2[i];
	}
	long long int area[4];
	area[0] = y * (x1[a - 1] - x1[0]);
	area[1] = y * (x2[b - 1] - x2[0]);
	area[2] = x * (y1[c - 1] - y1[0]);
	area[3] = x * (y2[d - 1] - y2[0]);
	sort(area, area + 4);
	cout << area[3] << endl;
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
