#include <bits/stdc++.h>

using namespace std;

int n, k;

int main()
{
	cin >> n >> k;

	int cnt = 0;

	while (n != 1)
	{
		cnt += n % k;
		n = n / k * k;
		
		while (n % k == 0)
		{
			cnt++;
			n /= k;
		}
	}

	cout << cnt << endl;
}
