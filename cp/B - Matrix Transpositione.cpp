#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vii vector<int><int>

int main()
{
	int h, w;
	cin >> h >> w;
	vector<vector<int>> mat(h, vector<int>(w));
	vector<vector<int>> cat(w, vector<int>(h));
	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < w; ++j)
		{
			cin >> mat[i][j];
		}
	}
	for (int i = 0; i < w; ++i)
	{
		for (int j = 0; j < h; ++j)
		{
			cat[i][j] = mat[j][i];
		}
	}
	for (int i = 0; i < w; ++i)
	{
		for (int j = 0; j < h; ++j)
		{
			cout << cat[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
