#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vii vector<vector <int>>

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int l, r, n;
		cin >> l >> r;
		n = r - l + 1;
		cout << 2 * n - 1 << endl;
	}
	return 0;
}
