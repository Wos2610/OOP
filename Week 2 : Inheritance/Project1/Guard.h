//
// Created by LENOVO on 9/6/2022.
//

#ifndef PROJECT1_GUARD_H
#define PROJECT1_GUARD_H

#pragma once
#include "Officer.h"

class Guard : public Officer{
    static int NUM_GUARD;
private:
    string areaGuard;
public:
    Guard();
    void setGuardId();
    void addNewGuard();
    void showGuardInfo();
    float calGuardSalary();
};


#endif //PROJECT1_GUARD_H
