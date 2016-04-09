#include "displayGroup.h"
#include <sys/ioctl.h>

DisplayGroup::DisplayGroup() {
	todoGroup = 0x0;
	//struct winsize w;
	//ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
	//terminalRows = w.ws_row;
  //terminalCols = w.ws_col;
	topLine = 0;
}

int DisplayGroup::getTerminalCols() { return terminalCols; }
int DisplayGroup::getTerminalRows() { return terminalRows; }

void DisplayGroup::setTerminalCols(int param) { terminalCols = param; }
void DisplayGroup::setTerminalRows(int param) { terminalRows = param; }
