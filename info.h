#ifndef INFO_H
#define INFO_H

#include <vector>
#include "Technician.h"
#include "Manager.h"
#include "Salesman.h"
#include "ManagerSales.h"
using namespace std;

class Info {
private:
    vector<Employee*> employees;
    Technician tech;
    Salesman sales;
    Manager mgr;
    ManagerSales mgrSales;

public:
    Info();
    void addNatural(int i, string n, Information inf);
    void addInfo(Employee* emp);
    void showInfo();
    void writeInfo();
    void readInfo();
};

#endif 
