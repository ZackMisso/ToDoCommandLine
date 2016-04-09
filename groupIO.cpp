#include "groupIO.h"
#include <iostream>

using namespace std;

GroupIO* GroupIO::instance = 0x0;

GroupIO::GroupIO() { }

GroupIO::~GroupIO() { }

GroupIO* GroupIO::getInstance() { return instance; }

void GroupIO::initialize() {
  if(!instance)
    instance = new GroupIO();
}

void GroupIO::destroy() {
  if(instance)
    delete instance;
}

void GroupIO::readGroups(GroupContainer* container) {
  cout << "Need To Implement GroupIO readContainer" << endl;
  // to be implemented
}

void GroupIO::writeGroups(GroupContainer* container) {
  cout << "Need To Implement GroupIO writeContainer" << endl;
  // to be implemented
}
