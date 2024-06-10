#include "ManagerSales.h"

ManagerSales::ManagerSales(int i, string n, Information inf, float pay, float sales, float rate)
    : Employee(i, n, inf), Manager(i, n, inf, pay), Salesman(i, n, inf, sales, rate) {}

ManagerSales::ManagerSales() {}

void ManagerSales::pay() {
    salary = monthlyPay + sales * salesRate;
}

void ManagerSales::showType() {
    cout << "ManagerSales" << endl;
}
