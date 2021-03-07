#ifndef __TASKOBJECT_HPP__
#define __TASKOBJECT_HPP__
#include <string>
//#include "TaskMemento.hpp"
#include "Date.hpp"

class TaskMemento;

class TaskObject {

    protected:
	std::string taskName;
	std::string description;
	std::string taskType;
	int priority;
	Date dueDate;  
	TaskObject* currentTask;
	
    public:
	
        /* Constructors */



        virtual void viewTask() = 0;
        void setTaskName(std::string taskName);
        void setTaskType(std::string taskType);
        void setTaskDescription(std::string description);
        void setTaskDueDate(Date dueDate);
	void setTaskPriority(int priority);
	std::string getTaskName()const;
	std::string getTaskType()const;
        std::string getTaskDescription()const;
        int getTaskPriority()const;
        Date getTaskDueDate()const;

	virtual void setTaskState(TaskObject* newTask);

	virtual TaskMemento storeInMemento();

        virtual TaskObject* restoreFromTaskMemento(TaskMemento taskMemento);

};

#endif //__TASKOBJECT_HPP__
