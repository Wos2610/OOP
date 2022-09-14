//
// Created by LENOVO on 9/13/2022.
//

#include "Company.h"

void Company::addNewPersonnel() {
    cout << "How many personnels do you want to add:";
    int number;
    cin >> number;
    while(number--){
        cout << "There are 2 types of personnel in company:\n";
        cout << "1. Office Staff\n";
        cout << "2. Production  Staff\n";
        cout << "-> Your choice :";
        int c;
        cin >> c;
        if(c == 1){
            Personnel *a = new OfficeStaff;
            a->addNew();
            a->calSalary();
            personnels.push_back(a);
        }
        else if(c == 2){
            Personnel *a = new ProductionStaff;
            a->addNew();
            a->calSalary();
            personnels.push_back(a);
        }
    }

}

void Company::showPersonnelInfo() {
    if(!personnels.size()){
        cout << "Nobody to show\n";
        return;
    }
    cout << "Full name of person you want to show information :";
    string need;
    cin.ignore();
    getline(cin, need);
    int found = 0;
    for(int i = 0; i < personnels.size(); i++){
        if(need == personnels[i]->getName()){
            personnels[i]->showInfo();
            found = 1;
        }
    }
    if(!found){
        cout << "No exist.\n";
    }
}

void Company::changePersonnelInfo() {
    if(!personnels.size()){
        cout << "Nobody to show\n";
        return;
    }
    cout << "Full name of person you want to change information :";
    string need;
    cin.ignore();
    getline(cin, need);
    int found = 0;
    for(int i = 0; i < personnels.size(); i++){
        if(need == personnels[i]->getName()){
            personnels[i]->changeInfo();
            found = 1;
        }
    }
    if(!found){
        cout << "No exist.\n";
    }
}

void Company::salarySum() {
    if(!personnels.size()){
        cout << "Nobody to show\n";
        return;
    }
    cout << "Sum of all personnels' salary in the company : ";
    float sum = 0;
    for(auto i : personnels){
        sum += i->getSalary();
    }
    cout << sum << "\n";
}



