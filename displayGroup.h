#ifndef __DISPLAYGROUP_H__
#define __DISPLAYGROUP_H__

#include "group.h"

class DisplayGroup {
private:
	Group* todoGroup;
	int terminalCols;
	int terminalRows;
	int topLine;
public:
	DisplayGroup();
	// getter methods
	int getTerminalCols();
	int getTerminalRows();
	// setter methods
	void setTerminalCols(int param);
	void setTerminalRows(int param);
};

#endif
