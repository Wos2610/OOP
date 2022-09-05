#include "Factory.h"

void Factory::setOfficerInfo() {
    officer.setInfo();
}

void Factory::addNewWorker() {
    Worker newWorker;
    newWorker.setInfo();
    workers.push_back(newWorker);
}

void Factory::getOfficerInfo() {
    officer.getInfo();
}

void Factory::getWorkerInfo() {
    int n = workers.size();
    for (int i = 0; i < n; i++) {
        cout << "Thong tin cua cong nha thu " << i + 1 << "\n";
        workers[i].getInfo();
    }
}

float Factory::officerSalary() {
    return officer.getSalary();
}

long long Factory::sumOfWorkerSalary() {
    int n = workers.size();
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += workers[i].getSalary();
    }
    return sum;
}

bool cmp1(Worker a, Worker b) {
    return a.getSalary() > b.getSalary();
}
void Factory::sortBySalary() {
    int n = workers.size();
    sort(workers.begin(), workers.begin() + n, cmp1);
}

bool cmp2(Worker a, Worker b) {
    return a.getName() < b.getName();
}

void Factory::sortByName() {
    int n = workers.size();
    sort(workers.begin(), workers.begin() + n, cmp2);
}

