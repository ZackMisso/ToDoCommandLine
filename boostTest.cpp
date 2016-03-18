#include "boostTest.h"
#include <iostream>

// Hack to fix boost
#define BOOST_NO_CXX11_SCOPED_ENUMS
#include <boost/filesystem.hpp>
#undef BOOST_NO_CXX11_SCOPED_ENUMS

using namespace std;
using namespace boost::filesystem;

BoostTest::BoostTest(char* file) {
	runTest(file);
}

void BoostTest::runTest(char* file) {
	// returns size in bytes
	cout << file << " :: " << file_size(file) << endl;
}
