//
// Created by LENOVO on 9/6/2022.
//

#include "Officer.h"

Officer::Officer() {
    num = 0;
    name = "";
    age = 0;
    gender = "";
    address = "";
    phoneNumber = "";
    homeTown = "";
    id = "";
    coefficientSalary = 0;
    dayWorked = 0;
}

void Officer::setId(string pre) {
    id = to_string(num);
    while(id.size() != 3){
        id = "0" + id;
    }
    id = pre + id;
}

void Officer::addNew() {
    cout << "Name :";
    cin.ignore();
    getline(cin, name);
    cout << "Age :";
    cin >> age;
    cout << "Gender :";
    cin >> gender;
    cout << "Address :";
    cin.ignore();
    getline(cin, address);
    cout << "Phone Number :";
    cin >> phoneNumber;
    cout << "Home Town :";
    cin.ignore();
    getline(cin, homeTown);
    cout << "Coefficient Salary :";
    cin >> coefficientSalary;
    cout << "Day Worked :";
    cin >> dayWorked;
}

void Officer::showInfo() {
    cout << "Name : " << name << "\n";
    cout << "Age : " << age << "\n";
    cout << "Gender : " << gender << "\n";
    cout << "Address : " << address << "\n";
    cout << "Phone Number : " << phoneNumber << "\n";
    cout << "Home Town : " << homeTown << "\n";
    cout << "ID : " << id << "\n";
    cout << "Coefficient Salary : " << coefficientSalary << "\n";
    cout << "Day Worked : " << dayWorked << "\n";
}

string Officer::getName() {
    return name;
}

float Officer::calSalary() {
    return (float)dayWorked * coefficientSalary;
}

void Officer::setNum(int *a) {
    num = *a;
}

