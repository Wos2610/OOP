//
// Created by LENOVO on 9/13/2022.
//

#include "OfficeStaff.h"

OfficeStaff::OfficeStaff() {
    basicSalary = 0.0;
    dayWorked = 0;
}

void OfficeStaff::calSalary() {
    Personnel::setSalary(basicSalary * (float) dayWorked);
}

void OfficeStaff::addNew() {
    Personnel::addNew();
    cout << "Basic Salary:";
    cin >> basicSalary;
    cout << "Number of worked days:";
    cin >> dayWorked;
}

void OfficeStaff::showInfo() {
    Personnel::showInfo();
    cout << "Basic Salary: " << basicSalary << "\n";
    cout << "Number of worked days: " << dayWorked << "\n";
}

void OfficeStaff::changeInfo() {
    cout << "What do you want to change ? \n";
    cout << "1. Name.\n";
    cout << "2. Basic Salary.\n";
    cout << "3. Number of worked days.\n";
    cout << "-> Your choice :";
    int c;
    cin >> c;
    switch (c) {
        case 1 : {
            string temp = "";
            cout << "You want to change name from " << getName() << "to :";
            cin.ignore();
            getline(cin, temp);
            setName(temp);
            break;
        }
        case 2 : {
            cout << "You want to change basic salary from " << basicSalary << " to :";
            cin >> basicSalary;
            calSalary();
            break;
        }
        case 3 : {
            cout << "You want to change number of worked days from " << basicSalary << " to :";
            cin >> dayWorked;
            calSalary();
            break;
        }
    }
}
