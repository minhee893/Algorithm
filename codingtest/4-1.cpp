#include <bits/stdc++.h>

using namespace std;

int n;
string line;

int main(void)
{
	cin >> n;
	cin.ignore();
	getline(cin, line);
	int x = 1, y = 1;

	for (int i = 0; i < line.size(); i++)
	{
		if (line[i] == 'R')
		{
			if (y + 1 <= n)
				y++;
		}
		else if (line[i] == 'L')
		{
			if (y - 1 > 0)
				y--;
		}
		else if (line[i] == 'U')
		{
			if (x - 1 > 0)
				x--;
		}
		else if (line[i] == 'D')
		{
			if (x + 1 <= n)
				x++;
		}
	}

	cout << x << ' ' << y << endl;
	return (0);
}
