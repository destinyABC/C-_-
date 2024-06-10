#include "Salesman.h"

Salesman::Salesman(int i, string n, Information inf, float sales, float rate)
    : Employee(i, n, inf), sales(sales), salesRate(rate) {}

Salesman::Salesman() : sales(0.0), salesRate(0.0) {}

void Salesman::setSales(float sales) {
    this->sales = sales;
}

float Salesman::getSales() {
    return sales;
}

void Salesman::setSalesRate(float rate) {
    salesRate = rate;
}

float Salesman::getSalesRate() {
    return salesRate;
}

void Salesman::pay() {
    salary = sales * salesRate;
}

void Salesman::showType() {
    cout << "Salesman" << endl;
}
