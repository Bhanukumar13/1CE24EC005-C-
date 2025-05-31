#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

const string FILE_NAME = "tasks.txt";

void loadTasks(vector<string>& tasks) {
    ifstream file(FILE_NAME);
    string line;
    while (getline(file, line)) {
        if (!line.empty())
            tasks.push_back(line);
    }
    file.close();
}

void saveTasks(const vector<string>& tasks) {
    ofstream file(FILE_NAME);
    for (const auto& task : tasks) {
        file << task << endl;
    }
    file.close();
}

void showTasks(const vector<string>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks available.\n";
        return;
    }
    cout << "\nYour Tasks:\n";
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". " << tasks[i] << endl;
    }
}

void addTask(vector<string>& tasks) {
    cout << "Enter a new task: ";
    string task;
    getline(cin >> ws, task); // Read with whitespace
    tasks.push_back(task);
    cout << "Task added!\n";
}

void deleteTask(vector<string>& tasks) {
    showTasks(tasks);
    if (tasks.empty()) return;
    
    int index;
    cout << "Enter task number to delete: ";
    cin >> index;
    if (index < 1 || index > tasks.size()) {
        cout << "Invalid index.\n";
        return;
    }
    tasks.erase(tasks.begin() + index - 1);
    cout << "Task deleted.\n";
}

int main() {
    vector<string> tasks;
    loadTasks(tasks);
    int choice;

    do {
        cout << "\n--- To-Do List Menu ---\n";
        cout << "1. Show tasks\n";
        cout << "2. Add task\n";
        cout << "3. Delete task\n";
        cout << "4. Save and exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: showTasks(tasks); break;
            case 2: addTask(tasks); break;
            case 3: deleteTask(tasks); break;
            case 4: saveTasks(tasks); cout << "Tasks saved. Goodbye!\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
