//
// Created by LENOVO on 9/6/2022.
//

#ifndef PROJECT1_OFFICERMANAGE_H
#define PROJECT1_OFFICERMANAGE_H

#include "Officer.h"
#include "Worker.h"
#include "Engineer.h"
#include "Guard.h"

class officerManage {
private:
    vector<Worker*> workers;
    vector<Engineer*> engineers;
    vector<Guard*> guards;

public:
    void addNewOfficer();
    void searchByName();
    void calSalary();
};


#endif //PROJECT1_OFFICERMANAGE_H
