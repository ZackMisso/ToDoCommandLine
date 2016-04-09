#include "dataIO.h"
#include <iostream>

using namespace std;

DataIO* DataIO::instance = 0x0;

DataIO::DataIO() { }

DataIO::~DataIO() { }

DataIO* DataIO::getInstance() { return instance; }

void DataIO::initialize() {
  if(!instance)
    instance = new DataIO();
}

void DataIO::destroy() {
  if(instance)
    delete instance;
}

void DataIO::readData(Group* group) {
  cout << "Need To Implement DataIO readData" << endl;
  // to be implemented
}

void DataIO::writeData(Group* group) {
  cout << "Need To Implement DataIO writeData" << endl;
  // to be implemented
}
