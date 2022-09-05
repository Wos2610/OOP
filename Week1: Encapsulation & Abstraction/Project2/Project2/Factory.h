#pragma once
#include "Worker.h"
#include "Officer.h"

class Factory {
private:
    Officer officer;
    vector<Worker> workers;
public:
    Factory() {};
    void setOfficerInfo();
    void addNewWorker();
    void getOfficerInfo();
    void getWorkerInfo();
    float officerSalary();
    long long sumOfWorkerSalary();
    void sortBySalary();
    void sortByName();

};