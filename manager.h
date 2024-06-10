#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

class Manager : virtual public Employee {
protected:
    float monthlyPay;

public:
    Manager(int i, string n, Information inf, float pay);
    Manager();
    void setMonthlyPay(float pay);
    float getMonthlyPay();
    void pay() override;
    void showType() override;
};

#endif 
