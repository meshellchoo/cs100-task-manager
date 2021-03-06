#ifndef __TASKLIST_CPP__
#define __TASKLIST_CPP__
#include <iostream>
#include <algorithm>    // std::sort

//#include "/home/csmajs/jooi001/cs100-task-manager/header/TaskList.hpp"
#include "/home/csmajs/mchu017/cs100-task-manager/header/TaskList.hpp"
//#include "/home/csmajs/htran164/cs100-task-manager/header/TaskList.hpp"


TaskList::TaskList(std::string taskName, std::string description, std::string taskType, int priority,Date dueDate,std::vector<Task*> subTasks) :TaskObject(){
	this->taskName = taskName;
	this->description = description;
	this->taskType = taskType;
	this->priority = priority;
	this->dueDate = dueDate;
	this->tasks = subTasks;
}

TaskList::TaskList(std::string taskName, std::string description, std::string taskType, int priority, Date dueDate) :TaskObject() {
	this->taskName = taskName;
	this->description = description;
	this->taskType = taskType;
	this->priority = priority;
	this->dueDate = dueDate;

}


TaskList::~TaskList(){
	this->clear();
}
void TaskList::clear(){
    for(int i = 0 ; i < tasks.size();i ++){
	delete tasks[i];
	tasks[i] = nullptr;	
    }
    tasks.clear();
}

bool  TaskList::deleteTask(std::string task){
    for(int i = 0; i < tasks.size(); i++){
            if(tasks[i]->getTaskName()== task){
		delete tasks[i];
		tasks.erase(tasks.begin() + i);
	   	return true;
	    }
    }
    return false;
}

bool  TaskList::deleteTask(Task* task){
    for(int i = 0; i < tasks.size(); i++){
            if(tasks[i] ==  task){
                delete tasks[i];
                tasks.erase(tasks.begin() + i);
                return true;
            }
    }
    return false;
}

void TaskList::addTask(Task* task){
    tasks.push_back(task);
}

void TaskList::viewTask(){
    std::cout << "-  {" << taskName << "}" << std::endl;
    std::cout << "    Description: " <<  description << std::endl;
    std::cout << "    Type of Task: " << taskType <<  std::endl;
    std::cout << "    Priority: " << priority << std::endl;
    std::cout << "    Due Date: " << dueDate << std::endl;
    for(int i = 0 ; i < tasks.size(); i++){
        std::cout << "      " ;
        std::cout << "- " << tasks[i]->getTaskName() << std::endl;
        std::cout << "        " ;
   	std::cout << "  Description: " << tasks[i]->getTaskDescription() << std::endl;
	std::cout << "        " ;
        std::cout << "  Type of Task: " << tasks[i]->getTaskType() << std::endl;
        std::cout << "        " ;
        std::cout << "  Priority: " << tasks[i]->getTaskPriority() << std::endl;
        std::cout << "        " ;
        std::cout << "  Due Date: " << tasks[i]->getTaskDueDate() << std::endl;
    }

}

void TaskList::viewTask(std::ostream& out)const{
    out << "- " << taskName << std::endl;
    out << "    Description: " <<  description << std::endl;
    out << "    Type of Task: " << taskType <<  std::endl;
    out << "    Priority: " << priority << std::endl;
    out << "    Due Date: " << dueDate << std::endl;
    for(int i = 0 ; i < tasks.size(); i++){
        out << "      " ;
        out << "- " << tasks[i]->getTaskName() << std::endl;
        out << "        " ;
        out << "  Description: " << tasks[i]->getTaskDescription() << std::endl;
        out << "        " ;
        out << "  Type of Task: " << tasks[i]->getTaskType() << std::endl;
        out << "        " ;
        out << "  Priority: " << tasks[i]->getTaskPriority() << std::endl;
        out << "        " ;
        out << "  Due Date: " << tasks[i]->getTaskDueDate() << std::endl;
    }

}
bool priorityComparator(Task* i, Task* j);

bool dueDateComparator(Task* i, Task* j)
{	
	Date i_temp = i->getTaskDueDate();
	Date j_temp = j->getTaskDueDate();

	if (i_temp.year != j_temp.year)
		return (i_temp.year < j_temp.year);
	else if (i_temp.month != j_temp.month)
		return (i_temp.month < j_temp.month);
	else if (i_temp.day != j_temp.day)
		return(i_temp.day < j_temp.day);
	else
		return (i->getTaskPriority()  >= j->getTaskPriority());
	return true;
}



bool priorityComparator(Task* i, Task* j){ 
	if(i->getTaskPriority() != j->getTaskPriority())
		return (i->getTaskPriority()  >= j->getTaskPriority());
	return dueDateComparator(i,j);
		
}

void TaskList::sortByPriority(){
	std::sort(tasks.begin(),tasks.end(),priorityComparator);
}

void TaskList::sortByDueDate(){
	std::sort(tasks.begin(),tasks.end(),dueDateComparator);
}

bool TaskList::isTaskList(){
	return true;
}

std::vector<Task*> TaskList::getSubTasks(){
	std::vector<Task*> tempTasks;
	for(int i = 0; i< tasks.size();i++){
		Task* t = tasks[i];
		tempTasks.push_back(new Task(t->getTaskName(),t->getTaskDescription(),t->getTaskType(),t->getTaskPriority(),t->getTaskDueDate()));
	}
	return tempTasks;
}


#endif 
