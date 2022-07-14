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

	
bool check(vll inv, ll x){
	ll nex[4][2];         // number of inversion, first pair a1 > a2
	nex[0][0] = 0;
	nex[0][1] = -1;
	nex[1][0] = 1;
	nex[1][1] = 0;
	nex[2][0] = 1;
	nex[2][1] = 0;
	nex[3][0] = -1;
	nex[3][1] = 1;
    ll nxt = x;
    for (int i = 1; i < inv.size(); i++) {
        nxt = nex[inv[i]][nxt];
        if(nxt == -1)
            return false;
    }
    return true;
}

	
void Slypher()
{
	ll n;
	cin >> n;
	vll inv;
	vin(inv,n);
	bool f = true;
	if(inv[0]==0) f = check(inv,0);
	else if(inv[0]==1 || inv[0] == 2) f = check(inv,0) || check(inv,1);
	else f = check(inv,1);
	cout << (f ? "YES\n" : "NO\n");
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
