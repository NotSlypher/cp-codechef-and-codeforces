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
	int n, m;
    cin >> n >> m;
	int mat[200][200];
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> mat[i][j];

	int pt, ptX, ptY, ans = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            pt = mat[i][j];
            ptX = i;
            ptY = j;
            while (ptX > 0 && ptY > 0) {
                ptX--;
                ptY--;
                pt += mat[ptX][ptY];
            }
            ptX = i;
            ptY = j;
            while (ptX < n - 1 && ptY > 0) {
                ptX++;
                ptY--;
                pt += mat[ptX][ptY];
            }
            ptX = i;
            ptY = j;
            while (ptX > 0 && ptY < m - 1) {
                ptX--;
                ptY++;
                pt += mat[ptX][ptY];
            }
            ptX = i;
            ptY = j;
            while (ptX < n - 1 && ptY < m - 1) {
                ptX++;
                ptY++;
                pt += mat[ptX][ptY];
            }
            if (pt > ans) {
                ans = pt;
            }
        }
    }
    cout << ans << endl;
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
