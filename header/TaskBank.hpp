#ifndef __TASKBANK_HPP__
#define __TASKBANK_HPP__
#include <vector>
#include "TaskObject.hpp"
#include "Task.hpp"
#include "TaskList.hpp"

class TaskBank{
	private:
		std::vector<TaskObject*> schedule;
	public:
		TaskBank(){};
		~TaskBank(){};
		void clear();
		void display();
		void addTask(TaskObject* task);
		bool deleteTask(TaskObject* task);
		void sortByPriority();
		void sortByDueDate();
//		TaskObject* createTaskBankMemento();
//		void restore(taskBankMemento);
		std::vector& operator=(const std::vector &v);
};

#endif