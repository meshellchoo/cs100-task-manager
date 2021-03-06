#ifndef __TASKBANK_HPP__
#define __TASKBANK_HPP__
#include <vector>
#include "TaskObject.hpp"
#include "Task.hpp"
#include "TaskList.hpp"
#include "TaskBankMemento.hpp"

class TaskBank{
	private:
		std::vector<TaskObject*> schedule;
	public:
		TaskBank();

		//big three
		~TaskBank();
		TaskBank(const TaskBank &copyThis);
		TaskBank& operator=(const TaskBank& taskbank);	
				
		void clear();
		void display();
		void display(std::ostream& out) const;
		void addTask(TaskObject* task);
		bool deleteTask(TaskObject* task);
		bool deleteTask(std::string taskName);
		void sortByPriority();
		void sortByDueDate();
		TaskBankMemento* createTaskBankMemento();
		void restore(TaskBankMemento* taskBankMemento);
		std::vector<TaskObject*> search(std::string userSearch);
	
};

#endif
