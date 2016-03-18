#include "boostTest.h"

#include <iostream>

using namespace std;

int main(int argc,char** argv) {
	cout << "HELLO WORLD" << endl;
	cout << "Running Boost Test" << endl;
	if(argc >= 2) {
		char* file = argv[1];
		BoostTest* test = new BoostTest(file);
	}
	return 0;
}
