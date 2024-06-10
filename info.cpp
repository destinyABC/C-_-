#include "Info.h"
#include <fstream>
#include <iostream>
using namespace std;

Info::Info() {}

void Info::addNatural(int i, string n, Information inf) {
    // 实现添加基本信息
    Technician tech(i, n, inf, 0, 0.0); //默认选择技术员
    employees.push_back(new Technician(tech)); 
}

void Info::addInfo(Employee* emp) {
    employees.push_back(emp);
}

void Info::showInfo() {
    for (auto emp : employees) {
        emp->displayEmployeeInfo();
        emp->showType();
        emp->pay();
        cout << "Salary: " << emp->getSalary() << endl;
    }
}

void Info::writeInfo() {
    ofstream outfile("information.txt", ios::out);
    if (!outfile) {
        cerr << "Unable to open file for writing." << endl;
        return;
    }
    for (auto emp : employees) {
        outfile << "ID: " << emp->getId() << ", Name: " << emp->getName() << ", Salary: " << emp->getSalary() << endl;
    }
    outfile.close();
}

void Info::readInfo() {
    ifstream infile("information.txt", ios::in);
    if (!infile) {
        cerr << "Unable to open file for reading." << endl;
        return;
    }
    string line;
    while (getline(infile, line)) {
        cout << line << endl;
    }
    infile.close();
}
