//
// Created by LENOVO on 9/13/2022.
//

#ifndef PROJECT2_OFFICESTAFF_H
#define PROJECT2_OFFICESTAFF_H

#pragma once
#include "Personnel.h"

class OfficeStaff : public Personnel{
private:
    float basicSalary;
    int dayWorked;
public:
    OfficeStaff();
    void calSalary();
    void addNew();
    void showInfo();
    void changeInfo();
};


#endif //PROJECT2_OFFICESTAFF_H
