#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vii vector<vector <int>>

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		long n, a[100000], p[100000];
		bool f = 1;
		cin >> n;
		for (int i = 0; i < n; ++i)
			cin >> a[i];
		sort(a, a + n);
		if (a[n - 1] <= n)
			cout << "NO\n";
		else
		{
			for (int i = 0; i < n; ++i) {
				a[i] = a[i] % (n + 1);
				p[i] = i + 1;
			}
			sort(a, a + n);
			for (int i = 0; i < n; ++i) {
				if (a[i] != p[i])
				{
					f = 0;
					break;
				}
			}
			if (a[0] != 1)
			{
				for (int i = 0; i < n; ++i)
					a[i] = a[i] % (a[i] - 1);
				sort(a, a + n);
				for (int i = 0; i < n; ++i) {
					if (a[i] != p[i])
					{
						f = 0;
						break;
					}
				}
			}
			
			if (f)
				cout << "YES " << n + 1 << endl;
			else
				cout << "NO\n";
		}
	}
	return 0;
}

