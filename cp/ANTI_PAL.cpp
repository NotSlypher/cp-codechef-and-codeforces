#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vii vector<vector <int>>

bool isAntiPalindrome(string S)
{
	int low = 0;
	int high = S.length() - 1;

	while (low < high)
	{
		if (S[low] == S[high])
			return false;

		low++;
		high--;
	}

	return true;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int N;
		string S;
		cin >> N >> S;

		if (N % 2 != 0)
			cout << "NO\n";

		else {
			sort(S.begin(), S.end());
			int itr2 = 0;

			char a = S[(N / 2) - 1];
			int x = S.find(a);
			int itr1 = (N / 2) - 1 - x;
			cout << itr1;
			while (!isAntiPalindrome(S))
			{
				if (itr2 == N - (N / 2) - 1 - itr1)
				{
					cout << "NO\n";
					break;
				}
				while (itr1--) {
					if (itr2 == N - (N / 2) - 1 )
					{
						break;
					}
					swap(S[(N / 2) - 1 - itr1], S[((N / 2) + itr2)]);
					itr2++;
				}
			}
			if (isAntiPalindrome(S))
			{
				cout << "YES\n" << S << endl;
			}
		}
	}
	return 0;
}
