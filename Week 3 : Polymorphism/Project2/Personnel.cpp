//
// Created by LENOVO on 9/13/2022.
//

#include "Personnel.h"

Personnel::Personnel() {
    name = "";
    salary = 0.0;
}

void Personnel::addNew() {
    cout << "Name :";
    cin.ignore();
    getline(cin, name);
}

void Personnel::showInfo() {
    cout << "Name: " << name << "\n";
    cout << "Salary : " << salary << "\n";
}


void Personnel::setSalary(float x) {
    salary = x;
}

void Personnel::setName(string x) {
    name = x;
}

string Personnel::getName() {
    return name;
}

float Personnel::getSalary() {
    return salary;
}


