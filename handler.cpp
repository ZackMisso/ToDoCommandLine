#include "handler.h"

Handler::Handler() {
	createNew = false;
	deleteOld = false;
	openProgram = false;
	displayOnly = false;
}

Handler::~Handler() {
	// Not Needed
}

void Handler::openByDefault() {
	bool tmp = createNew || deleteOld || displayOnly;
	if(!tmp && !openProgram)
		openProgram = true;
}

bool Handler::getCreateNewFlag() { return createNew; }
bool Handler::getDeleteOldFlag() { return deleteOld; }
bool Handler::getOpenProgramFlag() { return openProgram; }
bool Handler::getDisplayOnlyFlag() { return displayOnly; }

void Handler::setCreateNewFlag(bool param) { createNew = param; }
void Handler::setDeleteOldFlag(bool param) { deleteOld = param; }
void Handler::setOpenProgramFlag(bool param) { openProgram = param; }
void Handler::setDisplayOnlyFlag(bool param) { displayOnly = param; }
