#include "Worker.h"

void Worker::setInfo() {
    cout << "Nhập tên : ";
    getline(cin, name);
    cout << "Nhập tuổi : ";
    cin >> age;
    cout << "Nhập giới tinh : ";
    cin >> gender;
    cin.ignore();
    cout << "Nhập quê quán : ";
    getline(cin, homeTown);
    cout << "Nhập số ngày làm việc : ";
    cin >> day;
}

void Worker::getInfo() {
    cout << "Tên : " << name << "\n";
    cout << "Tuổi : " << age << "\n";
    cout << "Giới tính : " << gender << "\n";
    cout << "Quê quán : " << homeTown << "\n";
    cout << "Số ngày làm việc : " << day << "\n";
}

string Worker::getName() {
    /*int n = name.size();
    string temp = "";
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == ' ' && s[i + 1] != ' ') {
            break;
        }
        else {
            temp += name[i];
        }
    }*/
    return name;
}
long long Worker::getSalary() {
    return day * 100000;
}

