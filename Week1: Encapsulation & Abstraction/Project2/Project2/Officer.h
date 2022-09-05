#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#include<stdbool.h>

using namespace std;

class Officer {
private:
    string name;
    int age;
    string gender;
    string homeTown;
    float coefficientSalary;

public:
    Officer() {
        // name = "";
        // age = 0;
        // gender = "";
        // homeTown = "";
        // day = 0;
    };
    void setInfo();
    void getInfo();
    float getSalary();
};