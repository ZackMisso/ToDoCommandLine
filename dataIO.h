#ifndef __DATAIO_H__
#define __DATAIO_H__

#include "group.h"

class DataIO {
private:
  static DataIO* instance;
  DataIO();
public:
  ~DataIO();
  static DataIO* getInstance();
  static void initialize();
  static void destroy();
  void readData(Group* group);
  void writeData(Group* group);
};

#endif
