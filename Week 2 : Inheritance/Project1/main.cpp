#include "officerManage.h"

using namespace std;
int main() {
    officerManage manage;

    while(1){
        cout << "=============MENU=============\n";
        cout << "1. Add new officer.\n";
        cout << "2. Search by name.\n";
        cout << "3. Calculate officer's salary.\n";
        cout << "0. Exit.\n";
        cout << "==============================\n";
        cout << "Enter your choice : ";
        int choice;
        cin >> choice;
        if(choice == 0){
            break;
        }
        switch (choice) {
            case 1 :
                manage.addNewOfficer();
                break;
            case 2 :
                manage.searchByName();
                break;
            case 3 :
                manage.calSalary();
                break;
        }
    }
    return 0;
}
