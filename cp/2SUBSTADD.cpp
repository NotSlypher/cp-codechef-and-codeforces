#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, x, y, a[1000], b[1000], c[1000], xcnt = 0, ycnt = 0;
		cin >> n >> x >> y;
		for (int i = 0; i < n; ++i)
			cin >> a[i];
		for (int i = 0; i < n; ++i)
			cin >> b[i];
		for (int i = 0; i < n; ++i) 
		{
			if (b[i] - a[i] == x)
				xcnt++;
			else if (b[i] - a[i] == y)
				ycnt++;
		}
		if (xcnt + ycnt == n)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
