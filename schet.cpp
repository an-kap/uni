#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> vvod;
	int a;
	while (std::cin >> a)
	{
		vvod.push_back(a);
	}

	std::sort(std::begin(vvod), std::end(vvod));

	std::vector<int> numbers;
	std::vector<int> count;

	auto current = vvod[0];
	auto total = 0;

	numbers.push_back(current);
	count.push_back(0);

	for (auto n : vvod)
	{
		if (n == current)
		{
			++count[total];
		}

		if (n != current)
		{
			numbers.push_back(n);
			current = n;
			count.push_back(1);
			++total;
		}
	}
	std::cout << "Number + how often? " << std::endl;
	for (auto i = 0; i < total + 1; ++i)
	{
		std::cout << numbers[i] << ' ' << count[i] << std::endl;
	}

	return 0;
}