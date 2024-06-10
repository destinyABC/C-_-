#ifndef MANAGERSALES_H
#define MANAGERSALES_H

#include "Manager.h"
#include "Salesman.h"

class ManagerSales : public Manager, public Salesman {
public:
    ManagerSales(int i, string n, Information inf, float pay, float sales, float rate);
    ManagerSales();
    void pay() override;
    void showType() override;
};

#endif 
