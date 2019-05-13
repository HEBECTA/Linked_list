#pragma once

#include <list>
#include <iostream>
#include <random>

void sorting(std::list<int> &li);

void populate_list(std::list<int> &li);

void print_list(std::list<int> &li);

class Linked_list {

private:

	class node {

	private:

		node *next;
		node *previous;

		int value;

	public:


	};


	node *head;
	node *tail;

	int size;

public:

	void push_back();

	



};


