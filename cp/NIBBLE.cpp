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
			ll n;
			cin >> n;
			if (n % 4 == 0)
				cout << "Good\n";
			else
				cout << "Not Good\n";
		}
		return 0;
	}
