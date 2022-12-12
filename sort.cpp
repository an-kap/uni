#include <iostream>
#include <vector>
#include <string>
#include <algorithm>




int main()
{
	std::string a;
	std::vector<std::string> test;
	std::string stop;
	stop = '|' ;
	std::cout << "Original:" << std::endl;
	while (std::cin >> a && a != stop)
	{
		test.push_back(a);
	}
	std::sort(std::begin(test), std::end(test));
	std::cout << "Sorted:" << std::endl;
	for (auto n : test)
	{
		std::cout << n << ' ';
	}

	return 0;
}