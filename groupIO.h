#ifndef __GROUPIO_H__
#define __GROUPIO_H__

#include "groupContainer.h"

class GroupIO {
private:
  static GroupIO* instance;
  GroupIO();
public:
  ~GroupIO();
  static GroupIO* getInstance();
  static void initialize();
  static void destroy();
  void readGroups(GroupContainer* container);
  void writeGroups(GroupContainer* container);
};

#endif
