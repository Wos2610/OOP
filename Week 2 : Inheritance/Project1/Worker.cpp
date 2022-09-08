//
// Created by LENOVO on 9/6/2022.
//

#include "Worker.h"

int Worker::NUM_WORKER = 1;
Worker::Worker() {
}

void Worker::setWorkerId(){
    Officer::setId("CN");
}

void Worker::addNewWorker() {
    Officer::addNew();
    setNum(&NUM_WORKER);
    NUM_WORKER++;
    cout << "Level : ";
    cin >> level;
    cout << "\n";
}

void Worker::showWorkerInfo() {
    Officer::showInfo();
    cout << "Level : " << level << "\n";
}

float Worker::calWorkerSalary() {
    return (float)level * Officer::calSalary();
}


