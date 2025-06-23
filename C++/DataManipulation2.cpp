#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
using namespace std;

// Base Worker class
class Worker {
protected:


    string name;
    int id;
    double salary;

public:
    Worker(string name, int id, double salary)
        : name(name), id(id), salary(salary) {}

    virtual void display() const {
        cout << "Name: " << name << ", ID: " << id << ", Salary: " << salary << endl;
    }

    int getId() const { return id; }
};

// Specialized Worker class
class Manager : public Worker {
    int teamSize;

public:
    Manager(string name, int id, double salary, int teamSize)
        : Worker(name, id, salary), teamSize(teamSize) {}

    void display() const override {
        cout << "Manager -> Name: " << name << ", ID: " << id 
             << ", Salary: " << salary << ", Team Size: " << teamSize << endl;
    }
};

// Template for data manipulation
template <typename T>
class WorkerManager {
    vector<T> workers;

public:
    void addWorker(const T& worker) {
        workers.push_back(worker);
    }

    void displayWorkers() const {
        if (workers.empty()) {
            cout << "No workers to display." << endl;
            return;
        }
        for (const auto& worker : workers) {
            worker.display();
        }
    }

    T searchWorker(int id) const {
        for (const auto& worker : workers) {
            if (worker.getId() == id) {
                return worker;
            }
        }
        throw invalid_argument("Worker with ID " + to_string(id) + " not found.");
    }
};

// Main function
int main() {
    WorkerManager<Worker> workerManager;
    WorkerManager<Manager> managerManager;

    try {
        // Adding workers
        workerManager.addWorker(Worker("John Doe", 101, 50000));
        workerManager.addWorker(Worker("Jane Smith", 102, 60000));

        // Adding managers
        managerManager.addWorker(Manager("Alice Johnson", 201, 80000, 5));
        managerManager.addWorker(Manager("Bob Brown", 202, 90000, 7));

        // Display all workers
        cout << "Workers:" << endl;
        workerManager.displayWorkers();

        // Display all managers
        cout << "\nManagers:" << endl;
        managerManager.displayWorkers();

        // Search for a worker
        cout << "\nSearching for worker with ID 102..." << endl;
        Worker foundWorker = workerManager.searchWorker(102);
        foundWorker.display();
 
        cout << "\nSearching for worker with ID 999..." << endl;
        Worker notFoundWorker = workerManager.searchWorker(999);
        notFoundWorker.display();
    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    } catch (const exception& e) {
        cout << "An unexpected error occurred: " << e.what() << endl;
    }

    return 0;
}