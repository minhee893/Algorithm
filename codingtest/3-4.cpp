#include <bits/stdc++.h>
//wrong answer
using namespace std;

int n, k;

int main()
{
	cin >> n >> k;

	int cnt = 0;
	int cal = k;
	while (cal <= n)
	{
		cnt++;
		cal *= k;
	}
	cnt += n - cal / k;

	cout << cnt << endl;
}
