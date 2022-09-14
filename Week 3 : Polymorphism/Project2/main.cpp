#include "Company.h"

using namespace std;

int main() {
    Company company;
    while(1){
        cout << "=============MENU=============\n";
        cout << "1. Add new personnel.\n";
        cout << "2. Show information by name.\n";
        cout << "3. Change information by name.\n";
        cout << "4. Sum of all personnels' salary in the company.\n";
        cout << "0. Exit.\n";
        cout << "==============================\n";
        cout << "-> Enter your choice :";
        int choice;
        cin >> choice;
        cout << "------------------------------\n";
        if(choice == 0){
            break;
        }
        switch (choice) {
            case 1 :
                company.addNewPersonnel();
                break;
            case 2 :
                company.showPersonnelInfo();
                break;
            case 3 :
                company.changePersonnelInfo();
                break;
            case 4:
                company.salarySum();
                break;
        }
    }
    return 0;
}
