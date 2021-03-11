#ifndef _UNIT_TEST_
#define _UNIT_TEST_

#include "gtest/gtest.h"

#include "/home/csmajs/mchu017/cs100-task-manager/header/TaskBank.hpp"
#include "/home/csmajs/mchu017/cs100-task-manager/header/TaskBankCommand.hpp"

/*
#include "/home/csmajs/mchu017/cs100-task-manager/header/TaskList.hpp"
#include "/home/csmajs/mchu017/cs100-task-manager/header/Task.hpp"
#include "/home/csmajs/mchu017/cs100-task-manager/header/TaskBankMemento.hpp"
#include "/home/csmajs/mchu017/cs100-task-manager/header/TaskObject.hpp"
*/



//#include "/home/csmajs/mchu017/cs100-task-manager/header/TaskManager.hpp"
//#include "/home/csmajs/mchu017/cs100-task-manager/header/TaskBankMemento.hpp"

/*
#include "/home/csmajs/jooi001/cs100-task-manager/header/TaskBank.hpp"
#include "/home/csmajs/jooi001/cs100-task-manager/header/TaskBankCommand.hpp"
#include "/home/csmajs/jooi001/cs100-task-manager/header/TaskManager.hpp"
#include "/home/csmajs/jooi001/cs100-task-manager/header/TaskBankMemento.hpp"
*/
/*
#include "/home/csmajs/cs100/htran164/cs100-task-manager/header/TaskBank.hpp"
#include "/home/csmajs/cs100/htran164/cs100-task-manager/header/TaskBankCommand.hpp"
#include "/home/csmajs/cs100/htran164/cs100-task-manager/header/TaskManager.hpp"
#include "/home/csmajs/cs100/htran164/cs100-task-manager/header/TaskBankMemento.hpp"
*/
int main (int argc, char** argv){
        ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}

/*
TEST(TaskTest, setTaskName)
{
        Task* t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));
	t1->setTaskName("Updated Task 1");
        EXPECT_EQ("Updated Task 1", t1->getTaskName());
        delete t1;
}

TEST(TaskTest, setTaskDescription)
{
        Task* t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));
        t1->setTaskName("Updated Task 1");
	t1->setTaskDescription("This is my updated first task");
        EXPECT_EQ("This is my updated first task", t1->getTaskDescription());
        delete t1;
}

TEST(TaskTest, setTaskType)
{
        Task* t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));
        t1->setTaskName("Updated Task 1");
        t1->setTaskDescription("This is my updated first task");
        t1->setTaskType("New Test");
        EXPECT_EQ("New Test", t1->getTaskType());
        delete t1;
}

TEST(TaskTest, setTaskPriority)
{
        Task* t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));
        t1->setTaskName("Updated Task 1");
        t1->setTaskDescription("This is my updated first task");
        t1->setTaskType("New Test");
	t1->setTaskPriority(3);
        EXPECT_EQ(3, t1->getTaskPriority());
        delete t1;

}

TEST(TaskTest, setTaskDueDate)
{
        Task* t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));
        t1->setTaskName("Updated Task 1");
        t1->setTaskDescription("This is my updated first task");
        t1->setTaskType("New Test");
        t1->setTaskPriority(3);
	t1->setTaskDueDate(Date("03/11/2021"));
        EXPECT_EQ(Date("03/11/2021"), t1->getTaskDueDate());
        delete t1;

}

TEST(TaskTest, getTaskName)
{
        Task* t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));
        t1->setTaskName("Updated Task 1");
        t1->setTaskDescription("This is my updated first task");
        t1->setTaskType("New Test");
        t1->setTaskPriority(3);
        t1->setTaskDueDate(Date("03/11/2021"));
        EXPECT_EQ("Updated Task 1" , t1->getTaskName());
        delete t1;

}

TEST(TaskTest, getTaskDescription)
{
        Task* t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));
        t1->setTaskName("Updated Task 1");
        t1->setTaskDescription("This is my updated first task");
        t1->setTaskType("New Test");
        t1->setTaskPriority(3);
        t1->setTaskDueDate(Date("03/11/2021"));
        EXPECT_EQ("This is my updated first task" , t1->getTaskDescription());
        delete t1;
}

TEST(TaskTest, getTaskType)
{
        Task* t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));
        t1->setTaskName("Updated Task 1");
        t1->setTaskDescription("This is my updated first task");
        t1->setTaskType("New Test");
        t1->setTaskPriority(3);
        t1->setTaskDueDate(Date("03/11/2021"));
        EXPECT_EQ("New Test" , t1->getTaskType());
        delete t1;

}

TEST(TaskTest, getTaskPriority)
{
        Task* t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));
        t1->setTaskName("Updated Task 1");
        t1->setTaskDescription("This is my updated first task");
        t1->setTaskType("New Test");
        t1->setTaskPriority(3);
        t1->setTaskDueDate(Date("03/11/2021"));
        EXPECT_EQ(3 , t1->getTaskPriority());
        delete t1;
}

TEST(TaskTest, getTaskDueDate)
{
        Task* t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));
        t1->setTaskName("Updated Task 1");
        t1->setTaskDescription("This is my updated first task");
        t1->setTaskType("New Test");
        t1->setTaskPriority(3);
        t1->setTaskDueDate(Date("03/11/2021"));
        EXPECT_EQ(Date("03/11/2021") , t1->getTaskDueDate());
        delete t1;
}

TEST(TaskTest, viewTask)
{
        Task* t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));
        t1->setTaskName("Updated Task 1");
        t1->setTaskDescription("This is my updated first task");
        t1->setTaskType("New Test");
        t1->setTaskPriority(3);
        t1->setTaskDueDate(Date("03/11/2021"));
        EXPECT_EQ(    , t1->viewTask());
        delete t1;
}

TEST(TaskListTest, setTaskListName)
{
        TaskList* taskList1 = new TaskList("CS100 Labs","Labs for CS100", "School" ,2,Date("02/27/2021"))
        taskList1->setTaskName("Updated CS100 Labs");
	EXPECT_EQ("Updated CS100 Labs" , taskList1->getTaskName());
        delete taskList1;
}

TEST(TaskListTest, setTaskListDescription)
{
        TaskList* taskList1 = new TaskList("CS100 Labs","Labs for CS100", "School" ,2,Date("02/27/2021"))
        taskList1->setTaskName("Updated CS100 Labs");
        taskList1->setTaskDescription("Updated Labs for CS100");
	EXPECT_EQ("Updated Labs for CS100", taskList1->getTaskDescription());
        delete taskList1;

}

TEST(TaskListTest, setTaskListType)
{
        TaskList* taskList1 = new TaskList("CS100 Labs","Labs for CS100", "School" ,2,Date("02/27/2021"))
        taskList1->setTaskName("Updated CS100 Labs");
        taskList1->setTaskDescription("Updated Labs for CS100");
	taskList1->setTaskType("New School");
        EXPECT_EQ("New School", taskList1->getTaskType());
        delete taskList1;
}

TEST(TaskListTest, setTaskListPriority)
{
        TaskList* taskList1 = new TaskList("CS100 Labs","Labs for CS100", "School" , 2, Date("02/27/2021"))
        taskList1->setTaskName("Updated CS100 Labs");
        taskList1->setTaskDescription("Updated Labs for CS100");
        taskList1->setTaskType("New School");
	taskList1->setTaskPriority(5);
	EXPECT_EQ(5, taskList1->getTaskPriority());
        delete taskList1;
}

TEST(TaskListTest, setTaskListDueDate)
{
        TaskList* taskList1 = new TaskList("CS100 Labs","Labs for CS100", "School" ,2,Date("02/27/2021"))
        taskList1->->setTaskName("Updated CS100 Labs");
        taskList1->setTaskDescription("Updated Labs for CS100");
	taskList1->setTaskType("New School");
	taskList1->setTaskPriority(5);
 	taskList1->setTaskDueDate(Date("03/11/2021"));
        EXPECT_EQ(Date("03/11/2021"), taskList1->getTaskDueDate());
        delete taskList1;
}


TEST(TaskListTest, getTaskListName)
{
        TaskList* taskList1 = new TaskList("CS100 Labs","Labs for CS100", "School" ,2,Date("02/27/2021"))
        taskList1->setTaskName("Updated CS100 Labs");
        taskList1->setTaskDescription("Updated Labs for CS100");
	taskList1->setTaskType("New School");
	taskList1->setTaskPriority(5);
        taskList1->setTaskDueDate(Date("03/11/2021"));
        EXPECT_EQ("Updated CS100 Labs", taskList1->getTaskName());
        delete taskList1;
}


TEST(TaskListTest, getTaskListDescription)
{
        TaskList* taskList1 = new TaskList("CS100 Labs","Labs for CS100", "School" ,2,Date("02/27/2021"))
        taskList1->setTaskName("Updated CS100 Labs");
        taskList1->setTaskDescription("Updated Labs for CS100");
        taskList1->setTaskType("New School");
        taskList1->setTaskPriority(5);
        taskList1->setTaskDueDate(Date("03/11/2021"));
	EXPECT_EQ("Updated Labs for CS100", taskList1->getTaskDescription());
        delete taskList1;
}

TEST(TaskListTest, getTaskListType)
{
        TaskList* taskList1 = new TaskList("CS100 Labs","Labs for CS100", "School" ,2,Date("02/27/2021"))
        taskList1->setTaskName("Updated CS100 Labs");
        taskList1->setTaskDescription("Updated Labs for CS100");
        taskList1->setTaskType("New School");
        taskList1->setTaskPriority(5);
        taskList1->setTaskDueDate(Date("03/11/2021"));
        EXPECT_EQ("New School", taskList1->getTaskType());
        delete taskList1;
}

TEST(TaskListTest, getTaskListPriority)
{
        TaskList* taskList1 = new TaskList("CS100 Labs","Labs for CS100", "School" ,2,Date("02/27/2021"));
        taskList1->setTaskName("Updated CS100 Labs");
        taskList1->setTaskDescription("Updated Labs for CS100");
        taskList1->setTaskType("New School");
        taskList1->setTaskPriority(5);
        taskList1->setTaskDueDate(Date("03/11/2021"));
        EXPECT_EQ(5, taskList1->getTaskPriority());
        delete taskList1;
}

TEST(TaskListTest, addTask)
{
        TaskList* taskList1 = new TaskList("CS100 Labs","Labs for CS100", "School" ,2,Date("02/27/2021"))
        taskList1->setTaskName("Updated CS100 Labs");
        taskList1->setTaskDescription("Updated Labs for CS100");
        taskList1->setTaskType("New School");
        taskList1->setTaskPriority(5);
        taskList1->setTaskDueDate(Date("03/11/2021"));
	Task* t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));
        Task* t2 = new Task("Task 2", "This is my second task", "Test", 3, Date("03/11/2021"));
        Task* t3 = new Task("Task 3", "This is my third task", "Test", 4, Date("03/09/2021"));

	taskList1->addTask(t1);
	taskList1->addTask(t2);
	taskList1->addTask(t3);

        EXPECT_EQ( , taskList1->viewTask());
        delete taskList1;
	delete t1;
	delete t2;
	delete t3;
}

TEST(TaskListTest, deleteTask)
{
        TaskList* taskList1 = new TaskList("CS100 Labs","Labs for CS100", "School" ,2,Date("02/27/2021"))
        taskList1->setTaskName("Updated CS100 Labs");
        taskList1->setTaskDescription("Updated Labs for CS100");
        taskList1->setTaskType("New School");
        taskList1->setTaskPriority(5);
        taskList1->setTaskDueDate(Date("03/11/2021"));
        Task* t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));
        Task* t2 = new Task("Task 2", "This is my second task", "Test", 3, Date("03/11/2021"));
        Task* t3 = new Task("Task 3", "This is my third task", "Test", 4, Date("03/09/2021"));

        taskList1->addTask(t1);
        taskList1->addTask(t2);
        taskList1->addTask(t3);

	taskList1.deleteTask(t2);

		

        EXPECT_EQ( , taskList1.viewTask()); // should not print taske 2
        delete taskList1;
        delete t1;
	// task 2 should be deleted
        delete t3;
}


TEST(TaskListTest, clearTaskList)
{
        TaskList* taskList1 = new TaskList("CS100 Labs","Labs for CS100", "School" ,2,Date("02/27/2021"))
        taskList1->setTaskName("Updated CS100 Labs");
        taskList1->setTaskDescription("Updated Labs for CS100");
        taskList1->setTaskType("New School");
        taskList1->setTaskPriority(5);
        taskList1->setTaskDueDate(Date("03/11/2021"));
        Task* t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));
        Task* t2 = new Task("Task 2", "This is my second task", "Test", 3, Date("03/11/2021"));
        Task* t3 = new Task("Task 3", "This is my third task", "Test", 4, Date("03/09/2021"));

        taskList1->addTask(t1);
        taskList1->addTask(t2);
        taskList1->addTask(t3);

        taskList->clear();

        EXPECT_EQ( , taskList1->viewTask()); // should not print taske 2
        delete taskList1;
	// tasks in tasklsit should be deleted already
}

TEST(TaskListTest, sortByDueDate_TaskList)
{
        TaskList* taskList1 = new TaskList("CS100 Labs","Labs for CS100", "School" ,2,Date("02/27/2021"))
        taskList1->setTaskName("Updated CS100 Labs");
        taskList1->setTaskDescription("Updated Labs for CS100");
        taskList1->setTaskType("New School");
        taskList1->setTaskPriority(5);
        taskList1->setTaskDueDate(Date("03/11/2021"));
        Task* t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/20/2021"));
        Task* t2 = new Task("Task 2", "This is my second task", "Test", 3, Date("03/11/2021"));
        Task* t3 = new Task("Task 3", "This is my third task", "Test", 4, Date("03/16/2021"));

        taskList1->addTask(t1);
        taskList1->addTask(t2);
        taskList1->addTask(t3);

        taskList1->sortByDueDate();

        EXPECT_EQ( , taskList1.viewTask()); // print task 2, task 3, task 1
        delete taskList1;
	delete t1;
	delete t2;
	delete t3;
}

TEST(TaskListTest, sortByPriority_TaskList)
{
        TaskList* taskList1 = new TaskList("CS100 Labs","Labs for CS100", "School" ,2,Date("02/27/2021"))
        taskList1->setTaskName("Updated CS100 Labs");
        taskList1->setTaskDescription("Updated Labs for CS100");
        taskList1->setTaskType("New School");
        taskList1->setTaskPriority(5);
        taskList1->setTaskDueDate(Date("03/11/2021"));
        Task* t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));
        Task* t2 = new Task("Task 2", "This is my second task", "Test", 3, Date("03/11/2021"));
        Task* t3 = new Task("Task 3", "This is my third task", "Test", 4, Date("03/09/2021"));

        taskList1->addTask(t1);
        taskList1->addTask(t2);
        taskList1->addTask(t3);

        taskList1->sortByPriority();

        EXPECT_EQ( , taskList1->viewTask()); // print task 1, task 3, task 2
        delete taskList1;
        delete t1;
        delete t2;
        delete t3;
}

TEST(TaskListTest, viewTaskList)
{
        TaskList* taskList1 = new TaskList("CS100 Labs","Labs for CS100", "School" ,2,Date("02/27/2021"))
        taskList1->setTaskName("Updated CS100 Labs");
        taskList1->setTaskDescription("Updated Labs for CS100");
        taskList1->setTaskType("New School");
        taskList1->setTaskPriority(5);
        taskList1->setTaskDueDate(Date("03/11/2021"));
        Task* t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));
        Task* t2 = new Task("Task 2", "This is my second task", "Test", 3, Date("03/11/2021"));
        Task* t3 = new Task("Task 3", "This is my third task", "Test", 4, Date("03/09/2021"));

        taskList1->addTask(t1);
        taskList1->addTask(t2);
        taskList1->addTask(t3);

        EXPECT_EQ( , taskList1->viewTask()); // print task 1, task 2, task 3
        delete taskList1;
        delete t1;
        delete t2;
        delete t3;
}

TEST(TaskBankTest, addTask_TaskBank)
{
	TaskBank* taskBank1 = new TaskBank();
	Task* t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));
	Task* t2 = new Task("Task 2", "This is my second task", "Test", 3, Date("03/11/2021"));
        Task* t3 = new Task("Task 3", "This is my third task", "Test", 4, Date("03/09/2021"));
	taskBank1->addTask(t1);
	taskBank1->addTask(t2);
	taskBank1->addTask(t3);
	EXPECT_EQ( , taskBank1->viewTask());
	delete taskBank1;
	delete t1;
	delete t3;
	
}
*/
TEST(TaskBankTest, deleteTask_TaskBank)
{
	TaskBank* taskBank = new TaskBank();
	TaskList* taskList = new TaskList("TaskList 1", "This is my first tasklist", "Test", 5, Date("03/08/2021"));
        
        taskBank->addTask(taskList);
	taskBank->deleteTask(taskList);

	TaskBank* _taskBank = new TaskBank();

        std::stringstream s;
        std::stringstream output;

        taskBank->display(s);
        _taskBank->display(output);

        EXPECT_EQ(s.str(), output.str());
        
	delete taskBank;
        delete _taskBank;		
}


TEST(TaskBankTest, clearTaskBank)
{
	TaskBank* taskBank = new TaskBank();
	Task* t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));
        Task* t2 = new Task("Task 2", "This is my second task", "Test", 3, Date("03/11/2021"));
        Task* t3 = new Task("Task 3", "This is my third task", "Test", 4, Date("03/09/2021"));
	
	taskBank->addTask(t1);
	taskBank->addTask(t2);
	taskBank->addTask(t3);
	taskBank->clear();

	TaskBank* taskBank1 = new TaskBank();
	
	std::stringstream s;
	std::stringstream output;

	taskBank->display(s);
	taskBank1->display(output);
	EXPECT_EQ(s.str(),output.str());
	delete taskBank1;
	delete taskBank;
}

TEST(TaskBankTest, searchTaskBank)
{
	TaskBank* taskBank = new TaskBank(); 
	Task* t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));
        Task* t2 = new Task("Task 2", "This is my second task", "Test", 3, Date("03/11/2021"));
        Task* t3 = new Task("Task 3", "This is my third task", "Test", 4, Date("03/09/2021"));
	taskBank->addTask(t1);
	taskBank->addTask(t2);
	taskBank->addTask(t3);

	std::vector<TaskObject*>  found;
	found = taskBank->search(t2->getTaskName());
	EXPECT_EQ(t2, found[0]);
	
	
}




TEST(TaskBankTest, undoTaskListEdit)
{

	TaskBank* taskBank = new TaskBank();
        TaskBankCommand* taskBankCommand = new TaskBankCommand(taskBank);
        taskBankCommand->Backup();
        TaskList* taskList = new TaskList("TaskList 1", "This is my first tasklist", "Test", 5, Date("03/08/2021"));
        Task* t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));

        taskBank->addTask(t1);
        taskBankCommand->Backup();
        taskBank->addTask(taskList);
        taskBankCommand->Backup();
        taskList->setTaskName("TaskList!!!");
        taskBankCommand->Backup();

        taskBankCommand->Undo();
        taskBankCommand->Undo();

        TaskBank* _taskBank = new TaskBank();
        TaskList* _taskList = new TaskList("TaskList!!!", "This is my first tasklist", "Test", 5, Date("03/08/2021"));
        Task* _t1 = new Task("Task1", "This is my first task", "Test", 5, Date("03/08/2021"));
        _taskBank->addTask(_t1);
        _taskBank->addTask(_taskList);

        std::stringstream s;
        std::stringstream output;

        taskBank->display(s);
        _taskBank->display(output);
        EXPECT_EQ(s.str(), output.str());

 	
        delete _taskBank;
        delete taskBankCommand;
}


TEST(TaskBankTest, undoTaskEdit)
{
	TaskBank* taskBank = new TaskBank();
        TaskBankCommand* taskBankCommand = new TaskBankCommand(taskBank);
        taskBankCommand->Backup();
        TaskList* taskList = new TaskList("TaskList 1", "This is my first tasklist", "Test", 5, Date("03/08/2021"));
        Task* t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));

        taskBank->addTask(t1);
        taskBankCommand->Backup();
        taskBank->addTask(taskList);
        taskBankCommand->Backup();
	t1->setTaskName("newname");
	taskBankCommand->Backup();	

        taskBankCommand->Undo();
        taskBankCommand->Undo();

        TaskBank* _taskBank = new TaskBank();
	TaskList* _taskList = new TaskList("TaskList 1", "This is my first tasklist", "Test", 5, Date("03/08/2021"));
        Task* _t1 = new Task("newname", "This is my first task", "Test", 5, Date("03/08/2021"));
        _taskBank->addTask(_t1);
	_taskBank->addTask(_taskList);

        std::stringstream s;
        std::stringstream output;

        taskBank->display(s);
        _taskBank->display(output);
        EXPECT_EQ(s.str(), output.str());

 	
        delete _taskBank;
        delete taskBankCommand;        
}









TEST(TaskBankTest, undoTaskListAddTaskList)
{
        TaskBank* taskBank = new TaskBank();
        TaskBankCommand* taskBankCommand = new TaskBankCommand(taskBank);
        taskBankCommand->Backup();
        TaskList* taskList = new TaskList("TaskList 1", "This is my first tasklist", "Test", 5, Date("03/08/2021"));
        Task* t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));

        taskBank->addTask(t1);
        taskBankCommand->Backup();
        taskBank->addTask(taskList);
        taskBankCommand->Backup();

        taskBankCommand->Undo();
        taskBankCommand->Undo();

        TaskBank* _taskBank = new TaskBank();
        Task* _t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));
        _taskBank->addTask(_t1);


        std::stringstream s;
        std::stringstream output;

        taskBank->display(s);
        _taskBank->display(output);
        EXPECT_EQ(s.str(), output.str());
	
	
        delete _taskBank;
        delete taskBankCommand;
}



TEST(TaskBankTest, undoTaskListAddTask)
{
	TaskBank* taskBank = new TaskBank();
	TaskBankCommand* taskBankCommand = new TaskBankCommand(taskBank);
	taskBankCommand->Backup();
	TaskList* taskList = new TaskList("TaskList 1", "This is my first tasklist", "Test", 5, Date("03/08/2021"));
        Task* t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));
	
	taskBank->addTask(taskList);
	taskBankCommand->Backup();
	taskBank->addTask(t1);
	taskBankCommand->Backup();

	taskBankCommand->Undo();
	taskBankCommand->Undo();
	
	TaskBank* _taskBank = new TaskBank();
        TaskList* _taskList = new TaskList("TaskList 1", "This is my first tasklist", "Test", 5, Date("03/08/2021"));
	_taskBank->addTask(_taskList);


	std::stringstream s;
	std::stringstream output;
	
	taskBank->display(s);
	taskBank->display(output);
	EXPECT_EQ(s.str(), output.str());
	

	delete _taskBank;		
	delete taskBankCommand;
}

TEST(TaskBankTest, undoTaskListDeleteTaskList)
{
	TaskBank* taskBank = new TaskBank();
        TaskBankCommand* taskBankCommand = new TaskBankCommand(taskBank);
	taskBankCommand->Backup();
        TaskList* taskList = new TaskList("TaskList 1", "This is my first tasklist", "Test", 5, Date("03/08/2021"));
        
        taskBank->addTask(taskList);
        taskBankCommand->Backup();
        taskBank->deleteTask(taskList);
        taskBankCommand->Backup();

        taskBankCommand->Undo();
        taskBankCommand->Undo();

        TaskBank* _taskBank = new TaskBank();

        std::stringstream s;
        std::stringstream output;

        taskBank->display(s);
        taskBank->display(output);
        EXPECT_EQ(s.str(), output.str());
        
 	
        delete _taskBank;		
	delete taskBankCommand;
	
}

TEST(TaskBankTest, undoTaskListDeleteTask)
{
        TaskBank* taskBank = new TaskBank();
        TaskBankCommand* taskBankCommand = new TaskBankCommand(taskBank);
        taskBankCommand->Backup();
        Task* task = new Task("TaskList 1", "This is my first tasklist", "Test", 5, Date("03/08/2021"));

        taskBank->addTask(task);
        taskBankCommand->Backup();
        taskBank->deleteTask(task);
        taskBankCommand->Backup();
	
        taskBankCommand->Undo();
        taskBankCommand->Undo();

        TaskBank* _taskBank = new TaskBank();

        std::stringstream s;
        std::stringstream output;

        taskBank->display(s);
        taskBank->display(output);
        EXPECT_EQ(s.str(), output.str());

	
        delete _taskBank;
        delete taskBankCommand;

}



TEST(TaskBankTest, TaskBankDeleteTaskByString)
{
	TaskBank* taskBank = new TaskBank();
	Task* t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));
        Task* t2 = new Task("Task 2", "This is my second task", "Test", 3, Date("03/11/2021"));
        Task* t3 = new Task("Task 3", "This is my third task", "Test", 4, Date("03/09/2021"));
	

	taskBank->addTask(t1);
	taskBank->addTask(t2);
	taskBank->addTask(t3);
	taskBank->deleteTask(t3->getTaskName());	

	std::stringstream s;
	taskBank->display(s);
		
	TaskBank* correctTaskBank = new TaskBank();
        Task* _t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));
        Task* _t2 = new Task("Task 2", "This is my second task", "Test", 3, Date("03/11/2021"));

	correctTaskBank->addTask(_t1);
        correctTaskBank->addTask(_t2);

	std::stringstream correctOutput;
	correctTaskBank->display(correctOutput);

	EXPECT_EQ(s.str(),correctOutput.str());
	delete taskBank;
	delete correctTaskBank;


}

TEST(TaskBankTest, TaskBankDeleteTaskByReference)
{
        TaskBank* taskBank = new TaskBank();
        Task* t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));
        Task* t2 = new Task("Task 2", "This is my second task", "Test", 3, Date("03/11/2021"));
        Task* t3 = new Task("Task 3", "This is my third task", "Test", 4, Date("03/09/2021"));


        taskBank->addTask(t1);
        taskBank->addTask(t2);
        taskBank->addTask(t3);
        taskBank->deleteTask(t3);

        std::stringstream s;
        taskBank->display(s);

        TaskBank* correctTaskBank = new TaskBank();
        Task* _t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));
        Task* _t2 = new Task("Task 2", "This is my second task", "Test", 3, Date("03/11/2021"));

        correctTaskBank->addTask(_t1);
        correctTaskBank->addTask(_t2);

        std::stringstream correctOutput;
        correctTaskBank->display(correctOutput);

        EXPECT_EQ(s.str(),correctOutput.str());
        delete taskBank;
        delete correctTaskBank;

}

TEST(TaskBankTest, TaskBankDeleteTaskListByString)
{
        TaskBank* taskBank = new TaskBank();
        Task* t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));
        Task* t2 = new Task("Task 2", "This is my second task", "Test", 3, Date("03/11/2021"));
        Task* t3 = new Task("Task 3", "This is my third task", "Test", 4, Date("03/09/2021"));
        TaskList* taskList = new TaskList("TaskList 1"," This is my first taskList", "Test", 2, Date("11/03/2121"));

        taskBank->addTask(t1);
        taskBank->addTask(t2);
        taskBank->addTask(t3);
        taskBank->addTask(taskList);
	taskBank->deleteTask(taskList->getTaskName());
	
        std::stringstream s;
        taskBank->display(s);

        TaskBank* correctTaskBank = new TaskBank();
        Task* _t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));
        Task* _t2 = new Task("Task 2", "This is my second task", "Test", 3, Date("03/11/2021"));
        Task* _t3 = new Task("Task 3", "This is my third task", "Test", 4, Date("03/09/2021"));
        correctTaskBank->addTask(_t1);
        correctTaskBank->addTask(_t2);
        correctTaskBank->addTask(_t3);

        std::stringstream correctOutput;
        correctTaskBank->display(correctOutput);

        EXPECT_EQ(s.str(),correctOutput.str());
        delete taskBank;
        delete correctTaskBank;
}

TEST(TaskBankTest, TaskBankDeleteTaskListByReference)
{
        TaskBank* taskBank = new TaskBank();
        Task* t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));
        Task* t2 = new Task("Task 2", "This is my second task", "Test", 3, Date("03/11/2021"));
        Task* t3 = new Task("Task 3", "This is my third task", "Test", 4, Date("03/09/2021"));
	TaskList* taskList = new TaskList("TaskList 1"," This is my first taskList", "Test", 2, Date("11/03/2121"));

        taskBank->addTask(t1);
        taskBank->addTask(t2);
        taskBank->addTask(t3);
	taskBank->addTask(taskList);
	taskBank->deleteTask(taskList);	

        std::stringstream s;
        taskBank->display(s);

        TaskBank* correctTaskBank = new TaskBank();
        Task* _t1 = new Task("Task 1", "This is my first task", "Test", 5, Date("03/08/2021"));
        Task* _t2 = new Task("Task 2", "This is my second task", "Test", 3, Date("03/11/2021"));
	Task* _t3 = new Task("Task 3", "This is my third task", "Test", 4, Date("03/09/2021"));
        correctTaskBank->addTask(_t1);
        correctTaskBank->addTask(_t2);
	correctTaskBank->addTask(_t3);

        std::stringstream correctOutput;
        correctTaskBank->display(correctOutput);

        EXPECT_EQ(s.str(),correctOutput.str());
        delete taskBank;
        delete correctTaskBank;

}

#endif
