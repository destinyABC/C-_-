#include "Employee.h"
#include <fstream>
#include <iostream>
using namespace std;

string Employee::CompanyName = "DefaultCompany";

Employee::Employee(int i, string n, Information inf) : id(i), name(n), info(inf), salary(0.0) {}

Employee::Employee() : id(0), name(""), salary(0.0) {}

void Employee::setCompanyName(string cname) {
    CompanyName = cname;
}

void Employee::setId(int i) {
    id = i;
}

int Employee::getId() {
    return id;
}

void Employee::setName(string n) {
    name = n;
}

string Employee::getName() {
    return name;
}

void Employee::setInfo(Information inf) {
    info = inf;
}

Information Employee::getInfo() {
    return info;
}

void Employee::displayEmployeeInfo() {
    cout << "ID: " << id << ", Name: " << name << ", Company: " << CompanyName << endl;
    info.displayInfo();
}

void Employee::writeFile() {
    ofstream outfile("information.txt", ios::app);
    if (outfile.is_open()) {
        outfile << "ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
        outfile.close();
    }
    else {
        cout << "Unable to open file";
    }
}

float Employee::getSalary() {
    return salary;
}
