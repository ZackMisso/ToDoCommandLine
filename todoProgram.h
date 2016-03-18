#ifndef __TODOPROGRAM_H__
#define __TODOPROGRAM_H__

#include "handler.h"

class ToDoProgram {
private:
public:
	ToDoProgram();
	~ToDoProgram();
	void run(Handler* handler);
};

#endif
