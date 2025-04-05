// WORK HERE IS MADE FOR THE "Delete Task Function"
// Intermediate Level
// This Code is made for the Adding and Deleting of Task 
// Functions ARE: "deleteTask" AND "listTasks"
// Work By Bettye Taylor   

// ALL WORK THAT IS NOT "deleteTask" AND "listTasks" WAS MADE BY BETTYE TAYLOR
// AS AN THEORETICAL LINE OF CODE FOR THE TESTING THIS PROJECT 

#include <iostream>
#include <vector>
#include <string>

using namespace std;
// ALL ABOVE IS NEEDED FOR PROJECT TO WORK (NOTE IS ADDED IF OTHERS WORK WITH THIS CODE)
struct Task {
    std::string title;
    std::string description;
    bool completed;

    Task(const std::string& t, const std::string& desc)
        : title(t), description(desc) , completed(false){}
};

// Work For Bettye Taylor (Intermediate Level)
class TaskManager {
private:
   std::vector<Task> tasks; 

   public:
        void addTask(const std::string& title, const std::string&
        description) {
        tasks.push_back(Task(title, description));
        cout << "Task added successfully.\n";

    }
     //  FOR ADDING TASK
    void deleteTask(int taskId) {
        if (taskId >= 1 && static_cast<size_t>(taskId) <= tasks.size())
        {
            tasks.erase(tasks.begin() + taskId - 1);
            cout << "Task with ID " << taskId << "deleted successfully.\n";
        } else {
            cout << "Task with ID" << taskId << "not found.\n";
        }

    }

    //  FOR LIST OF TASK TASK
   
void listTask() const {
    if (tasks.empty()){
        cout << "No Tasks Available.\n";
} else {
    cout << "Task List: \n";
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << "ID: " << i + 1 << "\n";
        displayTaskDetails(tasks[i]);
    }


}

}

void displayTaskDetails(const Task& task) const {
    cout << "Title: " << task.title << "\n";
    cout << "Description: " << task.description << "\n";
    cout << "Status: " << (task.completed ? "Completed" :
        "Incomplete") << "\n\n";
}

};

// USER INPUT (THEORETICAL LINE OF CODE FOR THE TESTING THIS PROJECT)
// FUCTIONS USED FROM BEFORE "deleteTask" AND "listTasks"
int main() {
    TaskManager taskManager;
// MAIN GUI
    int choice;
    do {
        cout << "\n Task Management System \n";
        cout << "1. Add Task \n"; 
        cout << "2. Delete Task \n";
        cout << "3. List Tasks \n";
        cout << "4. Exit \n";
        cout << "Enter your choice: "; // SOME BUGS WITH THIS FUNCTION FUTHER WORK MAY BE NEEDED 
        cin >> choice;

        switch (choice) {
            case 1 : {
                std::string title, description;
                cout << "Enter task title: ";
                cin.ignore();
                getline(cin, title);
                cout << "Enter task description:";
                getline(cin, description);
                taskManager.addTask(title, description);
                break;

            }
            case 2: {
                int taskId;
                cout << "Enter the ID of the task to delete: ";
                cin  >> taskId; 
                taskManager .deleteTask(taskId);
                break;
            }
            case 3:
                taskManager.listTask();
                break;
            case 4:
                cout << "Exiting Program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again. \n";
        }
        // GUI WORK ENDED 

        } while (choice != 4);

        return 0 ; 
    }

// WORK BY BETTYE TAYLOR AT PRAIRE STATE COLLEGE 
// YEAR 2023
// FALL SEMESTER
// TIME OF WORK: 4-5 HOURS 
