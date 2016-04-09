#ifndef __GROUPCONTAINER_H__
#define __GROUPCONTAINER_H__

#include "array.h"
#include "group.h"

class GroupContainer {
private:
  Array<Group*>* groups;
public:
  GroupContainer();
  ~GroupContainer();
  // getter methods
  Array<Group*>* getGroups();
  // setter methods
  void setGroups(Array<Group*>* param);
};

#endif
