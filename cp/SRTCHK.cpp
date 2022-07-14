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
		int n, a[100000], b[100000], cnt = 0;
		cin >> n;
		for (int i = 0; i < n; ++i)
			cin >> a[i];
		for (int i = 0; i < n; ++i)
			cin >> b[i];
		sort(a, a + n);
		for (int i = 0; i < n; ++i)
		{
			if (a[i] == b[i])
				cnt++;
		}
		if (cnt == n)
			cout << "yes\n";
		else
			cout << "no\n";
	}
	return 0;
}
