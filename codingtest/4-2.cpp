#include <bits/stdc++.h>

using namespace std;

int n;

int main(void)
{
	cin >> n;

	int count = 0;

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j < 60; j++)
		{
			for (int k = 0; k < 60; k++)
			{
				if (i % 10 == 3 || j / 10 == 3 || j % 10 == 3 || k / 10 == 3 || k % 10 == 3)
				{
					//cout << i << j << k << endl;
					count++;
				}
			}
		}
	}
	cout << count << endl;


	int h, m, s;
	count = 0;
	h = 0;
	while (h < n + 1)
	{
		m = 0;
		while (m < 60)
		{
			s = 0;
			while (s < 60)
			{
				if (h % 10 == 3 || m / 10 == 3 || m % 10 == 3 || s / 10 == 3 || s % 10 == 3)
				{
					//cout << h << m << s << endl;
					count++;
				}
				s++;
			}
			m++;
		}
		h++;
	}

	cout << count << endl;
}
