#ifndef __TASKBANK_CPP__
#define __TASKBANK_CPP__

#include <vector>
#include "TaskObject.cpp"
#include "Task.cpp"
#include "TaskList.cpp"
#include <string>
#include <iostream>

TaskBank::TaskBank(){}

TaskBank::~TaskBank(){
	for(int i = ; i < schedule.size(); i++){
		delete schedule[i];
		schedule[i] = nullptr;
	}
	schedule.clear();	
}

void TaskBank::clear(){
	
}

void TaskBank::display(){


}

void TaskBank::addTask(TaskObject* task){
	schedule.push_back(task);
}

void TaskBank::deleteTask(TaskObject* task){
	for(int i = 0; i <schedule.size(); i++){
		if (schedule[i] == task){
			schedule.erase(schedule.begin()+i);
		}
		else {
			std::cout << "Task/Task List was not found." << std::endl;
		}
	}
}

void TaskBank::sortByPriority(){}
//		TaskObject* createTaskBankMemento();
//		//		void restore(taskBankMemento);
//
//		}



#endif
