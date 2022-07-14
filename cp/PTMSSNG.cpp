#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vii vector<vector <int>>

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{

		int n, x, y;
		cin >> n;
		map<int, int> mx, my;
		for (int i = 0; i < 4 * n - 1; ++i)
		{
			cin >> x >> y;
			mx[x]++;
			my[y]++;
		}
		int p, q;
		for (auto i : mx) {
			if (i.second % 2 == 1)
				p = i.first;
		}
		for (auto i : my) {
			if (i.second % 2 == 1)
				q = i.first;
		}
		cout << p << " " << q << endl;
	}
	return 0;
}
