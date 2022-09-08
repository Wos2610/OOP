//
// Created by LENOVO on 9/6/2022.
//

#ifndef PROJECT1_ENGINEER_H
#define PROJECT1_ENGINEER_H

#pragma once
#include "Officer.h"

class Engineer : public Officer{
    static int NUM_ENGINEER;
private:
    string major;
    int yearWorked;

public:
    Engineer();
    void setEngineerId();
    void addNewEngineer();
    void showEngineerInfo();
    float calEngineerSalary();
};


#endif //PROJECT1_ENGINEER_H
