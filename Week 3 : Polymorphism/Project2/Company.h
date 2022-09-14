//
// Created by LENOVO on 9/13/2022.
//

#ifndef PROJECT2_COMPANY_H
#define PROJECT2_COMPANY_H

#include "Personnel.h"
#include "OfficeStaff.h"
#include "ProductionStaff.h"

class Company {
private:
    vector<Personnel*> personnels;
public:
    void addNewPersonnel();
    void showPersonnelInfo();
    void changePersonnelInfo();
    void salarySum();
};


#endif //PROJECT2_COMPANY_H
