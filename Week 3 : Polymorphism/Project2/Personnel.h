//
// Created by LENOVO on 9/13/2022.
//

#ifndef PROJECT2_PERSONNEL_H
#define PROJECT2_PERSONNEL_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Personnel {
private:
    string name;
    float salary;
public:
    Personnel();
    virtual void calSalary() = 0;
    virtual void addNew() = 0;
    virtual void showInfo() = 0;
    virtual void changeInfo() = 0;
    void setSalary(float x);
    float getSalary();
    void setName(string x);
    string getName();
};


#endif //PROJECT2_PERSONNEL_H
