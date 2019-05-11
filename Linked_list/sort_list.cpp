#include "pch.h"
#include <list>
#include <iostream>

void sort(std::list<int> &li) {

	std::list<int>::iterator min;

	bool found = false;

	for (auto pos1 = li.begin(), end = --li.end(); pos1 != end; ++pos1) {

		min = pos1;

		for (auto pos2 = ++pos1; pos2 != li.end(); ++pos2) {

			if (*min > *pos2) {

				std::cout << *min << " > " << *pos2 << std::endl;

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