#include "pch.h"
#include "Linked_list.h"

void sorting(std::list<int> &li) {

	std::list<int>::iterator min;

	bool found = false;

	auto end = --li.end();

	for (auto pos1 = li.begin(); pos1 != end; ++pos1) {

		min = pos1;

		std::cout << "checking with " << *min << std::endl;

		for (auto pos2 = pos1; pos2 != li.end(); ++pos2) {

			std::cout << " sec " << *pos2 << std::endl;

			if (*min > *pos2) {

				min = pos2;

				found = true;
			}
		}

		if (found) {

			std::cout << "min " << *min << std::endl;

			int temp = *pos1;

			*pos1 = *min;

			*min = temp;

			found = false;
		}
	}
}

void print_list(std::list<int> &li) {

	for (auto i = li.begin(); i != li.end(); ++i) {

		std::cout << *i << std::endl;
	}
}

void populate_list(std::list<int> &li) {

	std::random_device rd;
	std::mt19937 rnd;
	std::uniform_int_distribution<int> range(0, 250);

	for (int i = 0; i < 20; i++) {

		li.push_back(range(rnd));
	}
}