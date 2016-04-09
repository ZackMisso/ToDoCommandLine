#include "groupContainer.h"

GroupContainer::GroupContainer() {
  groups = new Array<Group*>();
}

GroupContainer::~GroupContainer() {
  while(groups->getSize())
    delete groups->removeLast();
  delete groups;
}

Array<Group*>* GroupContainer::getGroups() { return groups; }

void GroupContainer::setGroups(Array<Group*>* param) { groups = param; }
