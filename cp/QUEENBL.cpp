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
	int x, y;
	cin >> x >> y;
	vector<vector<int>> board(8, vector<int>(8, 0));
	board[x - 1][y - 1] = 1;
	if (x == 1 && y == 1)
		board[1][2] = 2;
	else if (x == 8 && y == 8)
		board[6][5] = 2;
	else if (x == 1 && y == 8)
		board[1][5] = 2;
	else if (x == 8 && y == 1)
		board[6][2] = 2;
	else if (x == 1) {
		board[2][y - 2] = 2;
		board[2][y] = 2;
	}
	else if (x == 8) {
		board[5][y - 2] = 2;
		board[5][y] = 2;
	}
	else if (y == 1) {
		board[x - 2][2] = 2;
		board[x][2] = 2;
	}
	else if (y == 8) {
		board[x-2][5] = 2;
		board[x][5] = 2;
	}
	else if(x == 7 && y == 7)
	{
		board[7][4] = 2;
		board[3][7] = 2;
	}
	else if(x > 3 && y != 7)
	{
		board[x - 4][y - 2] = 2;
		board[x][y + 1] = 2;
	}
	else if(x <= 3 && y != 7)
	{
		board[x + 2][y - 2] = 2;
		board[x - 2][y + 1] = 2;
	}
	else
	{
		board[x - 2][3] = 2;
		board[x + 1][7] = 2;
	}
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			cout << board[i][j] << " ";
		}
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
