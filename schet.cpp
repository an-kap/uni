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

	auto element = vvod[0];
	auto schet = 0;

	numbers.push_back(current);
	count.push_back(0);

	for (auto n : vvod)
	{
		if (n == element)
		{
			++count[schet];
		}

		if (n != element)
		{
			numbers.push_back(n);
			element = n;
			count.push_back(1);
			++schet;
		}
	}
	std::cout << "Number + how often? " << std::endl;
	for (auto i = 0; i < schet + 1; ++i)
	{
		std::cout << numbers[i] << ' ' << count[i] << std::endl;
	}

	return 0;
}
