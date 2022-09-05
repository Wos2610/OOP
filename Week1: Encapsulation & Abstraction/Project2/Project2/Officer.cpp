#include "Officer.h"

void Officer::setInfo() {
    cin.ignore();
    cout << "Nhap ten : ";
    getline(cin, name);
    cout << "Nhap tuoi : ";
    cin >> age;
    cout << "Nhap gioi tinh : ";
    cin >> gender;
    cin.ignore();
    cout << "Nhap que quan : ";
    getline(cin, homeTown);
    cout << "Nhap he so luong : ";
    cin >> coefficientSalary;
}

void Officer::getInfo() {
    cout << "Ten : " << name << "\n";
    cout << "Tuoi : " << age << "\n";
    cout << "Gioi tinh : " << gender << "\n";
    cout << "Que quan : " << homeTown << "\n";
    cout << "He so luong : " << coefficientSalary << "\n";
}

float Officer::getSalary() {
    return coefficientSalary * 100000;
}


