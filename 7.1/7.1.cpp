#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{
	int a[] = { 3, 4, 14, 5, 7, 4, 12, 7, 2 };
	std::vector < int > v(a, a + sizeof(a) / sizeof(*a));

	std::vector < int >::iterator itMin = std::min_element(v.begin(), v.end());
	std::vector < int >::iterator itMax = std::max_element(v.begin(), v.end());
	std::iter_swap(itMin, itMax);

	std::copy(v.begin(), v.end(), std::ostream_iterator < int >(std::cout, " "));

	return 0;
}