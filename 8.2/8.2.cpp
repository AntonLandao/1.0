#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>
#include <random>

int main()
{
	std::default_random_engine generator;
	std::uniform_int_distribution <> distribution(1, 9);

	size_t rowsCount;
	std::cout << "N: ";
	std::cin >> rowsCount;

	size_t colsCount;
	std::cout << "T: ";
	std::cin >> colsCount;

	std::vector < std::vector < int>> matrix(rowsCount, std::vector <int>(colsCount, 0));
	std::cout << "Matrix: " << std::endl;
	for (auto& currentRow : matrix) {
		for (auto& currentRowElement : currentRow)
			std::cout << std::setw(5) <<(currentRowElement = distribution(generator));
		std::cout << std::endl;
	}

	std::cout << std::endl << "New matrix: " << std::endl;
	for (auto& currentRow : matrix) {
		std::sort(currentRow.begin(), currentRow.end());
		for (auto currentRowElement : currentRow)
			std::cout << std::setw(5) << currentRowElement;
		std::cout << std::endl;
	}

	std::system("pause");
	return 0;
}