//
// Created by LENOVO on 9/6/2022.
//

#include "Engineer.h"

int Engineer::NUM_ENGINEER = 1;
Engineer::Engineer() {}

void Engineer::setEngineerId() {
    Officer::setId("KS");
}

void Engineer::addNewEngineer() {
    Officer::addNew();
    setNum(&NUM_ENGINEER);
    NUM_ENGINEER++;
    cout << "Major :";
    cin >> major;
    cout << "Year Worked :";
    cin >> yearWorked;
    cout << "\n";
}

void Engineer::showEngineerInfo() {
    Officer::showInfo();
    cout << "Major : " << major << "\n";
    cout << "Year Worked : " << yearWorked << "\n";
}

float Engineer::calEngineerSalary() {
    return (float)yearWorked * Officer::calSalary();
}

