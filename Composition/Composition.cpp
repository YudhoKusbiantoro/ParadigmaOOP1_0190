// Composition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

#include "jantung.h"
#include "manusia.h"

int main() {
	manusia* varmanusia = new manusia("jono");
	delete varmanusia;
	return 0;
}