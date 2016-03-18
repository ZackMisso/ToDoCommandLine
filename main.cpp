#include "boostTest.h"
#include "handler.h"
#include "todoProgram.h"

#include <iostream>
#include <assert.h>
#include <stdarg.h>
#include <unistd.h>
#include <cstdlib>

using namespace std;

int main(int argc,char** argv) {
	cout << "HELLO WORLD" << endl;
	
	//cout << "Running Boost Test" << endl;
	//if(argc >= 2) {
	//	char* file = argv[1];
	//	BoostTest* test = new BoostTest(file);
	//}
	
	//cout << "Creating required classes" << endl;
	// Creating required clases
	Handler* handler = new Handler();
	ToDoProgram* program = new ToDoProgram();
	// Reading for flags
	int i;
	while((i=getopt(argc,argv,"tc:d:s:o")) != EOF) {
		switch(i) {
			case 'c': {
				break;
			}
			case 'd': {
				break;
			}
			case 's': {
				break;
			}
			case 'o': {
				break;
			}
			default: {
				cout << "ERROR :: FLAG NOT RECOGNIZED" << endl;
				return -1;
				break;
			}
		}
	}
	return 0;
}
