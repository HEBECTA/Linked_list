#include "pch.h"
#include <list>
#include <iostream>

void sort(std::list<int> &li) {

	std::list<int>::iterator min, end;

	bool found = false;

	end = --li.end();

	for (auto pos1 = li.begin(); pos1 != end; ++pos1) {

		min = pos1;

		std::cout << "pos1 :" << *pos1 << std::endl;

		for (auto pos2 = pos1; pos2 != li.end(); ++pos2) {

			if (*min > *pos2) {

				std::cout << "was " << *min << " now change to " << *pos2 << std::endl;

				min = pos2;

				found = true;
			}
		}

		if (found) {

			std::cout << "min : " << *min << std::endl;

			int temp = *pos1;

			li.emplace(pos1, *min);

			li.emplace(min, temp);

			found = false;
		}
	}
}

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