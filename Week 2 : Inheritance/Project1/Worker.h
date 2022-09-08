//
// Created by LENOVO on 9/6/2022.
//

#ifndef PROJECT1_WORKER_H
#define PROJECT1_WORKER_H

#pragma once
#include "Officer.h"

class Worker : public Officer{
    static int NUM_WORKER;
private:
    int level;
public:
    Worker();
    void setWorkerId();
    void addNewWorker();
    void showWorkerInfo();
    float calWorkerSalary();
};


#endif //PROJECT1_WORKER_H
