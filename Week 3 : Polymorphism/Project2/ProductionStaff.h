//
// Created by LENOVO on 9/13/2022.
//

#ifndef PROJECT2_PRODUCTIONSTAFF_H
#define PROJECT2_PRODUCTIONSTAFF_H

#include "Personnel.h"

class ProductionStaff : public Personnel{
private:
    int productNum;
    float productPrice;
public:
    ProductionStaff();
    void calSalary();
    void addNew();
    void showInfo();
    void changeInfo();
};


#endif //PROJECT2_PRODUCTIONSTAFF_H
