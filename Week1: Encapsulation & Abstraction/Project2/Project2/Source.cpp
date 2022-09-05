#include "Factory.h"

int main() {
    int c;
    Factory factory;
    while (1) {
        cout << "=================MENU================\n";
        cout << "1. Nhap thong tin can bo\n";
        cout << "2. Them moi mot cong nhan\n";
        cout << "3. Hien thi thong tin can bo\n";
        cout << "4. Hien thi thong tin tat ca cac cong nhan\n";
        cout << "5. Tinh tien luong cua can bo\n";
        cout << "6. Tinh tong tien luong cua cong nhan\n";
        cout << "7. Sap xep lai thu tu cong nhan theo luong giam dan\n";
        cout << "8. Sap xep lai thu tu cong nhan theo ten(theo thu tu tu dien)\n";
        cout << "9. Exit\n";
        cout << "Your choice : \n";
        cin >> c;
        if (c == 9) {
            cout << "Chuong trinh ket thuc.";
            break;
        }
        switch (c) {
        case 1:
            factory.setOfficerInfo();
            break;
        case 2:
            factory.addNewWorker();
            break;
        case 3:
            factory.getOfficerInfo();
            break;
        case 4:
            factory.getWorkerInfo();
            break;
        case 5:
            cout << factory.officerSalary();
            break;
        case 6:
            cout << factory.sumOfWorkerSalary();
            break;
        case 7:
            factory.sortBySalary();
            break;
        case 8:
            factory.sortByName();
            break;
        }
    }


}
