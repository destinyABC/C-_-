#include "Manager.h"

Manager::Manager(int i, string n, Information inf, float pay)
    : Employee(i, n, inf), monthlyPay(pay) {}

Manager::Manager() : monthlyPay(0.0) {}

void Manager::setMonthlyPay(float pay) {
    monthlyPay = pay;
}

float Manager::getMonthlyPay() {
    return monthlyPay;
}

void Manager::pay() {
    salary = monthlyPay;
}

void Manager::showType() {
    cout << "Manager" << endl;
}
