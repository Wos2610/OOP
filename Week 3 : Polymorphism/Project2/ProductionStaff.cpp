//
// Created by LENOVO on 9/13/2022.
//

#include "ProductionStaff.h"

ProductionStaff::ProductionStaff() {
    productNum = 0;
    productPrice = 0.0;
}

void ProductionStaff::calSalary() {
    Personnel::setSalary( (float)productNum * productPrice);
}

void ProductionStaff::addNew() {
    Personnel::addNew();
    cout << "Number of products:";
    cin >> productNum;
    cout << "A product price:";
    cin >> productPrice;
}

void ProductionStaff::showInfo() {
    Personnel::showInfo();
    cout << "Number of products: " << productNum << "\n";
    cout << "A product price: " << productPrice << "\n";
}

void ProductionStaff::changeInfo() {
    cout << "What do you want to change ? \n";
    cout << "1. Name.\n";
    cout << "2. Number of products.\n";
    cout << "3. A product price.\n";
    cout << "-> Your choice :";
    int c;
    cin >> c;
    switch (c) {
        case 1 : {
            string temp = "";
            cout << "You want to change name from " << getName() << "to :";
            cin.ignore();
            getline(cin, temp);
            setName(temp);
            break;
        }
        case 2 : {
            cout << "You want to change number of products from " << productNum << " to :";
            cin >> productNum;
            calSalary();
            break;
        }
        case 3 : {
            cout << "You want to change a product price from " << productPrice << " to :";
            cin >> productPrice;
            calSalary();
            break;
        }
    }
}
