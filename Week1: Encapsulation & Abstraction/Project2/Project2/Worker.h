#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#include<stdbool.h>

using namespace std;

class Worker {
private:
    string name;
    int age;
    string gender;
    string homeTown;
    int day;

public:
    Worker() {
        // name = "";
        // age = 0;
        // gender = "";
        // homeTown = "";
        // day = 0;
    };
    void setInfo();
    void getInfo();
    string getName();
    long long getSalary();
};