#include "Menu.h"
#include <iostream>
using namespace std;

void Menu::select_menu() {
    int choice;
    do {
        cout << "1. Add Employee Info" << endl;
        cout << "2. Show All Info" << endl;
        cout << "3. Write Info to File" << endl;
        cout << "4. Read Info from File" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        handle_menu(choice);
    } while (choice != 0);
}

void Menu::handle_menu(int choice) {
    switch (choice) {
    case 1:
        addEmployeeMenu();
        break;
    case 2:
        info.showInfo();
        break;
    case 3:
        info.writeInfo();
        break;
    case 4:
        info.readInfo();
        break;
    case 0:
        cout << "Exiting..." << endl;
        break;
    default:
        cout << "Invalid choice!" << endl;
    }
}

void Menu::addEmployeeMenu() {
    int type;
    cout << "Select Employee Type: " << endl;
    cout << "1. Technician" << endl;
    cout << "2. Salesman" << endl;
    cout << "3. Manager" << endl;
    cout << "4. ManagerSales" << endl;
    cout << "Enter your choice: ";
    cin >> type;

    int id, hours;
    float rate, sales, monthlyPay;
    string name;
    int age;
    float weight;

    cout << "Enter ID: ";
    cin >> id;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Weight: ";
    cin >> weight;

    Information inf(age, weight);

    switch (type) {
    case 1:
        cout << "Enter Hours Worked: ";
        cin >> hours;
        cout << "Enter Hourly Rate: ";
        cin >> rate;
        info.addInfo(new Technician(id, name, inf, hours, rate));
        break;
    case 2:
        cout << "Enter Sales: ";
        cin >> sales;
        cout << "Enter Sales Rate: ";
        cin >> rate;
        info.addInfo(new Salesman(id, name, inf, sales, rate));
        break;
    case 3:
        cout << "Enter Monthly Pay: ";
        cin >> monthlyPay;
        info.addInfo(new Manager(id, name, inf, monthlyPay));
        break;
    case 4:
        cout << "Enter Monthly Pay: ";
        cin >> monthlyPay;
        cout << "Enter Sales: ";
        cin >> sales;
        cout << "Enter Sales Rate: ";
        cin >> rate;
        info.addInfo(new ManagerSales(id, name, inf, monthlyPay, sales, rate));
        break;
    default:
        cout << "Invalid type!" << endl;
    }
}
