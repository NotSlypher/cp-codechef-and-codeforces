#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vii vector<int><int>

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		string s;
		cin >> n >> k >> s;
		int low = 0, high = n + 1;
		while (high - low > 1)
		{
			int mid = (high + low) / 2, opt = 0;
			for (int i = mid - 1; i >= 0; --i)
			{
				int req = (opt + s[i] - '0') % 10;
				if (req != 0)
					opt += 10 - req;
			}
			if (opt <= k)
				low = mid;
			else
				high = mid;
		}
		cout << low << endl;
	}
	return 0;
}
