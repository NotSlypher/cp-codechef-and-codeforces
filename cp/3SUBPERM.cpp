#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		if (n == 1 && k == 1)
			cout << 1 << endl;
		else if(k != 1)
		{
			for (int i = 1; i < k; ++i)
				cout << i << " ";
			cout << n << " ";
			for (int i = 0; i < n-k; ++i)
				cout << i + k << " ";
			cout << endl;
		}
		else
			cout << -1 << endl;
	}
	return 0;
}
