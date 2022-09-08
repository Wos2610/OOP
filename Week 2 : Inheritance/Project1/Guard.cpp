//
// Created by LENOVO on 9/6/2022.
//

#include "Guard.h"

int Guard::NUM_GUARD = 1;

Guard::Guard() {}

void Guard::setGuardId(){
    Officer::setId("BV");
}

void Guard::addNewGuard() {
    Officer::addNew();
    setNum(&NUM_GUARD);
    NUM_GUARD++;
    cout << "Area Guard : ";
    cout << "(Warehouse/Entrance/Factory/Residence) ";
    cin >> areaGuard;
    cout << "\n";
}

void Guard::showGuardInfo() {
    Officer::showInfo();
    cout << "Area Guard : " << areaGuard << "\n";
}

float Guard::calGuardSalary() {
    return Officer::calSalary();
}

