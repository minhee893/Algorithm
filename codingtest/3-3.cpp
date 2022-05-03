#include <bits/stdc++.h>

using namespace std;

int row, col;

int main()
{
	cin >> row >> col;

	vector <int> v[row];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			int x;
			cin >> x;
			v[i].push_back(x);
		}
	}

	int max = INT_MIN;
	int max_index = -1;
	for (int i = 0; i < row; i++)
	{
		int cur = *min_element(v[i].begin(), v[i].end());
		if (cur > max)
		{
			max = cur;
			max_index = i;
		}
	}

	cout << max_index << " row -> " << max << endl;
}
