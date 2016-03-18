#include "group.h"

Group::Group(string param) {
	todos = new vector<string>();
	name = param;
}

void Group::loadFromFile() {
	// to be implemented
}

void Group::writeToFile() {
	// to be implemented
}

string Group::getName() { return name; }

void Group::setName(string param) { name = param; }
