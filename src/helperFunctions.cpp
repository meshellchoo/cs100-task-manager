#ifndef __HELPERFUNCTIONS_CPP__
#define __HELPERFUNCTIONS_CPP__
#include <iostream>
#include <string>
//#include "/home/csmajs/mchu017/cs100-task-manager/header/helperFunctions.hpp"
#include "/home/csmajs/jooi001/cs100-task-manager/header/helperFunctions.hpp"

void printMenu(){
	std::cout << "*******************************" << std::endl;
	std::cout << "********** Main Menu **********" << std::endl;
	std::cout << "*******************************" << std::endl;
	std::cout << "(1): Add a task" << std::endl;
	std::cout << "(2): Add a tasklist" << std::endl;
	std::cout << "(3): Edit task" << std::endl;
	std::cout << "(4): Delete task" << std::endl;
	std::cout << "(5): Display Current Schedule" << std::endl;
	std::cout << "(6): Undo last action" << std::endl;
	std::cout << "(7): Search for a task" << std::endl;
	std::cout << "(8): Sort list" << std::endl;
	std::cout << "(x): Exit:" << std::endl;
//  	std::cout << "(6): Sort schedule by due date" << std::endl;
//	std::cout << "(7): Sort schedule by priority" << std::endl;
//	std::cout << "(8): Sort schedule by type of task" << std::endl;
	
}

void printSortMenu(){
	std::cout << "*******************************" << std::endl;
        std::cout << "********** Sort Menu **********" << std::endl;
        std::cout << "*******************************" << std::endl;	
	std::cout << "(1): Sort by due date" << std::endl;
        std::cout << "(2): Sort by priority" << std::endl;
}

Task* getTaskFromUser(){
	std::string taskName,taskDescription,taskType;
	int priority;
        Date dueDate;
        std::cout << "Task Name: ";
	std::getline(std::cin >> std::ws, taskName);

       // std::cout << std::endl;
        std::cout << "Description: ";
	std::getline(std::cin >> std::ws, taskDescription);
        
	//std::cout << std::endl;
        std::cout << "Type of task: " ;
	std::getline(std::cin >> std::ws, taskType);

	// std::cout << std::endl;
        std::cout << "Priority of Task (1-10): " ;
        std::cin >> priority;
	while (priority < 1 || priority > 10){
		std::cout << "Invalid priority. Please re-enter the priority." << std::endl;
		std::cout << "Priority of Task (1-10): " ;
	        std::cin >> priority;
	}

        //std::cout << std::endl;
        std::cout << "Due Date (mm/dd/yyyy): " ;
        std::cin >> dueDate;
       // std::cout << std::endl;
	return new Task(taskName,taskDescription,taskType,priority,dueDate);	
	
}

TaskList* getTaskListFromUser(){
        std::string taskName,taskDescription,taskType;
        int priority;
        Date dueDate;
        std::cout << "Task Name: " ;
        std::getline(std::cin >> std::ws, taskName);

 //       std::cout << std::endl;
        std::cout << "Description: " ;
        std::getline(std::cin >> std::ws, taskDescription);

   //     std::cout << std::endl;
        std::cout << "Type of task: " ;
        std::getline(std::cin >> std::ws, taskType);

     //   std::cout << std::endl;
        std::cout << "Priority of Task (1-10): " ;
        std::cin >> priority;
        while (priority < 1 || priority > 10){
                std::cout << "Invalid priority. Please re-enter the priority." << std::endl;
                std::cout << "Priority of Task (1-10): " ;
                std::cin >> priority;
        }

       // std::cout << std::endl;
        std::cout << "Due Date (mm/dd/yyyy): " ;
        std::cin >> dueDate;
        //std::cout << std::endl;

        return new TaskList(taskName,taskDescription,taskType,priority, dueDate);
}


#endif
