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

int compare(const void* ap, const void* bp)
{
	// Typecasting
	const int* a = (int*)ap;
	const int* b = (int*)bp;

	if (*a < *b)
		return -1;
	else if (*a > *b)
		return 1;
	else
		return 0;
}

void Slypher()
{
	ll palins[16] = {0, 110, 220, 330, 440, 550, 1001, 1111, 1221, 1331, 1441, 1551, 2002, 2112, 2222, 2332};
	ll h, m, s, cnt = 0;
	char c;
	cin >> h >> c >> m >> s;
	if(m %2 ==0 && s == 2)
	{
		cout << 10 << endl;
		return;
	}
	if(m %2 !=0 && s == 2)
	{
		cout << 10 << endl;
		return;
	}

	ll ha = h, ma = m;
	do
	{
		ll k = stoi(to_string(ha) + to_string(ma));
		if (bsearch(&k, palins, 16, sizeof(palins[0]), compare))
			cnt++;
		ma += s % 60;
		ha += s / 60 + ma / 60;
		ma = ma % 60;
		ha = ha % 24;
	}
	while (ha != h || ma != m);
	cout << cnt << endl;
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
