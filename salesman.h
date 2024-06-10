#ifndef SALESMAN_H
#define SALESMAN_H

#include "Employee.h"

class Salesman : virtual public Employee {
protected:
    float sales;
    float salesRate;

public:
    Salesman(int i, string n, Information inf, float sales, float rate);
    Salesman();
    void setSales(float sales);
    float getSales();
    void setSalesRate(float rate);
    float getSalesRate();
    void pay() override;
    void showType() override;
};

#endif 
