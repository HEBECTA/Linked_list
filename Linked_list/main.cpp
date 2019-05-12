// Linked_list.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <list>
#include <random>

void sort(std::list<int> &li);

void test();

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

void sorting(std::list<int> &li);

int main()
{
	
	std::list<int> li;

	populate_list(li);

	print_list(li);

	std::cout << "Hello World!\n";

	sorting(li);

	//sort(li);

	print_list(li);
	
	test();
}


void test() {


	std::list<int> li;

	li.push_back(5);
	li.push_back(15);
	li.push_back(25);
	li.push_back(35);
	li.push_back(45);
	li.push_back(55);


	auto i = li.begin();

	++i;
	++i;
	++i;

	*i = 10;

	std::cout << *i << std::endl;


}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
