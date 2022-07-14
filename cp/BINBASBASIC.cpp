#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vii vector<vector <int>>

void reverseStr(string& str)
{
	int n = str.length();
	for (int i = 0; i < n / 2; i++)
		swap(str[i], str[n - i - 1]);
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k, cnt = 0;
		string s, s1, s2;
		cin >> n >> k >> s;
		if (n % 2 == 0)
		{
			s1 = s.substr(0, n / 2);
			s2 = s.substr(n / 2, n / 2);
			reverseStr(s1);
			for (int i = 0; i < n/2; ++i)
				if (s1[i] != s2[i])
					cnt++;
		}
		else
		{
			s1 = s.substr(0, n / 2);
			s2 = s.substr((n / 2) + 1, n / 2);
			reverseStr(s1);
			for (int i = 0; i < n/2; ++i)
				if (s1[i] != s2[i])
					cnt++;
		}
		int rem = k - cnt;
		if (rem >= 0 && rem % 2 == 0)
			cout << "YES\n";
		else if (rem >= 0 && n % 2 != 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
