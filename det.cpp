#include <iostream>
#include <vector>

std::vector<std::vector<int>> Minor(std::vector<std::vector<int>> matrix, int a, int b)
{
	std::vector<std::vector<int>> minor(std::size(matrix) - 1, std::vector<int>(std::size(matrix) - 1));

	for (auto i = 0; i < std::size(matrix); ++i)
	{
		auto x = 0;
		if (i < a) { x = i; }
		if (i > a) { x = i - 1; }
		if (i == a) continue;

		for (auto j = 0; j < std::size(matrix); ++j)
		{
			auto y = 0;

			if (j < b) { y = j; }
			if (j > b) { y = j - 1; }
			if (j == b) continue;

			minor[x][y] = matrix[i][j];

		}
	}
	return minor;
}

int det(std::vector<std::vector<int>> matrix)
{
	if (std::size(matrix) == 1)
	{
		return matrix[0][0];
	}
	if (std::size(matrix) == 2)
	{
		return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
	}

	auto s = 0;

	for (auto i = 0; i < std::size(matrix); ++i)
	{
		if (matrix[0][i] != 0) {
			s += det(Minor(matrix, 0, i)) * matrix[0][i] * std::pow(-1, i);
		}
	}

	return s;
}

int main()
{//ввести свою матрицу тут
	std::vector<std::vector<int>> matrix({ { 1,0,3,4 }, { 4,5,6,5}, {7,8,10,0},{7,8,10,0} });
	int R = size(matrix);
	/*std::vector<std::vector<int>> matrix;
	int R;
	std::cin >>R ;
	int a;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < R; j++) {
			std::cin >> a;
			matrix[i][j]=a;
		}
		std::cout << std::endl;
	}*/
	std::cout << "A=" << std::endl;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < R; j++) {
			printf("%3d", matrix[i][j]);
		}
		std::cout << std::endl;
	}
	std::cout <<"DET(A)="<< det(matrix);

	return 0;
}
