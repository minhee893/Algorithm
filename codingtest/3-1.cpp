#include <iostream>

int	main(void)
{
	int	i;
	int n = 1260;
	int	coins[4] = {500, 100, 50, 10};
	int	change[4] = {0, 0, 0, 0};

	while (n > 0)
	{
		for (i = 0; i < 4; i++)
		{
			if (n >= coins[i])
			{
				n -= coins[i];
				change[i] += 1;
			}
			else
				i++;
		}
	}

	for (i = 0; i < 4; i++)
		std::cout << coins[i] << " is " << change[i] << " times used" << std::endl;

	return (0);
}
