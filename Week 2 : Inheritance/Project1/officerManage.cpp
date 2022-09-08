//
// Created by LENOVO on 9/6/2022.
//

#include "officerManage.h"

void officerManage::addNewOfficer() {
    cout << "~ADD NEW OFFICER~\n";
    cout << "-> Number of officers do you want to add : ";
    int n;
    cin >> n;
    while(n > 0){
        cout << "There are 3 types :\n";
        cout << "   1.Worker\n   2.Engineer\n   3.Guard\n";
        cout << " Select type :";

        int choice;
        cin >> choice;
        cout << "\n";
        switch(choice){
            case 1:{
                Worker* newWorker = new Worker;
                newWorker->addNewWorker();
                newWorker->setWorkerId();
                workers.push_back(newWorker);
                n--;
                break;
            }

            case 2:{
                Engineer* newEngineer = new Engineer;
                newEngineer->addNewEngineer();
                newEngineer->setEngineerId();
                engineers.push_back(newEngineer);
                n--;
                break;
            }

            case 3:{
                Guard* newGuard = new Guard;
                newGuard->addNewGuard();
                newGuard->setGuardId();
                guards.push_back(newGuard);
                n--;
                break;
            }

        }
    }

}

string splitName(string s){
    int n = s.size();
    string temp = "";
    for(int i = n - 1; i >= 0; i--){
        if(s[i] == ' '){
            break;
        }
        else {
            temp += s[i];
        }
    }
    reverse(temp.begin(), temp.end());
    return temp;
}

void officerManage::searchByName() {
    string need;
    cout << "Officer's name which you need to search : ";
    cin >> need;
    cout << "\n";
    string temp = "";
    int no = 0;
    for(int i = 0; i < workers.size(); i++){
        temp = splitName(workers[i]->getName());
        if(temp == need){
            no++;
            cout << no;
            if(no == 1){
                cout << "st";
            }
            else if(no == 2){
                cout << "nd";
            }
            else if(no == 3){
                cout << "rd";
            }
            else {
                cout << "th";
            }
            cout << ": \n";
            workers[i]->showWorkerInfo();
        }
    }

    for(int i = 0; i < engineers.size(); i++){
        temp = splitName(engineers[i]->getName());
        if(temp == need){
            no++;
            cout << no;
            if(no == 1){
                cout << "st";
            }
            else if(no == 2){
                cout << "nd";
            }
            else if(no == 3){
                cout << "rd";
            }
            else {
                cout << "th";
            }
            cout << ": \n";
            engineers[i]->showEngineerInfo();
        }
    }

    for(int i = 0; i < guards.size(); i++){
        temp = splitName(guards[i]->getName());
        if(temp == need){
            no++;
            cout << no;
            if(no == 1){
                cout << "st";
            }
            else if(no == 2){
                cout << "nd";
            }
            else if(no == 3){
                cout << "rd";
            }
            else {
                cout << "th";
            }
            cout << ": \n";
            guards[i]->showGuardInfo();
        }
    }

    if(no == 0){
        cout << "No exist.\n";
    }
}

void officerManage::calSalary() {
    string need;
    cout << "Officer's name which you need to calculate : ";
    cin >> need;
    cout << "\n";
    string temp = "";
    int no = 0;
    for(int i = 0; i < workers.size(); i++){
        temp = splitName(workers[i]->getName());
        if(temp == need){
            no++;
            cout << no;
            if(no == 1){
                cout << "st";
            }
            else if(no == 2){
                cout << "nd";
            }
            else if(no == 3){
                cout << "rd";
            }
            else {
                cout << "th";
            }
            cout << ": ";

            cout << workers[i]->calWorkerSalary() << "\n";
        }
    }

    for(int i = 0; i < engineers.size(); i++){
        temp = splitName(engineers[i]->getName());
        if(temp == need){
            no++;
            cout << no;
            if(no == 1){
                cout << "st";
            }
            else if(no == 2){
                cout << "nd";
            }
            else if(no == 3){
                cout << "rd";
            }
            else {
                cout << "th";
            }
            cout << ": ";

            cout << engineers[i]->calEngineerSalary() << "\n";
        }
    }

    for(int i = 0; i < guards.size(); i++){
        temp = splitName(guards[i]->getName());
        if(temp == need){
            no++;
            cout << no;
            if(no == 1){
                cout << "st";
            }
            else if(no == 2){
                cout << "nd";
            }
            else if(no == 3){
                cout << "rd";
            }
            else {
                cout << "th";
            }
            cout << ": ";
            cout << guards[i]->calGuardSalary() << "\n";
        }
    }

    if(no == 0){
        cout << "No exit.\n";
    }
}
