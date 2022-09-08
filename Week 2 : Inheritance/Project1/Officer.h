//
// Created by LENOVO on 9/6/2022.
//

#ifndef PROJECT1_OFFICER_H
#define PROJECT1_OFFICER_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Officer {
private :
    string name;
    int age;
    string gender;
    string address;
    string phoneNumber;
    string homeTown;
    int num;
    string id;
    float coefficientSalary;
    int dayWorked;
public:
    Officer();
    void setNum(int *a);
    void setId(string pre);
    void addNew();
    void showInfo();
    string getName();
    float calSalary();

};


#endif //PROJECT1_OFFICER_H
