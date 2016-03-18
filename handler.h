#ifndef __HANDLER_H__
#define __HANDLER_H__

// This is a container meant to keep track of the flags the user inputs

class Handler {
private:
	bool createNew;
	bool deleteOld;
	bool openProgram;
	bool displayOnly;
public:
	Handler();
	~Handler();
	void openByDefault();
	// getter methods
	bool getCreateNewFlag();
	bool getDeleteOldFlag();
	bool getOpenProgramFlag();
	bool getDisplayOnlyFlag();
	// setter methods
	void setCreateNewFlag(bool param);
	void setDeleteOldFlag(bool param);
	void setOpenProgramFlag(bool param);
	void setDisplayOnlyFlag(bool param);
};

#endif
