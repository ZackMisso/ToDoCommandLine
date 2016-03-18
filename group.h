#ifndef __GROUP_H__
#define __GROUP_H__

#include <string>
#include <vector>

using namespace std;

class Group {
private:
	vector<string>* todos;
	string name;
public:
	Group(string param);
	void loadFromFile();
	void writeToFile();
	// getter methods
	string getName();
	// setter methods
	void setName(string param);
};

#endif
