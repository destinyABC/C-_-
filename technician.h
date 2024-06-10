#ifndef TECHNICIAN_H
#define TECHNICIAN_H

#include "Employee.h"

class Technician : public Employee {
private:
    int hoursWorked;
    float hourlyRate;

public:
    Technician(int i, string n, Information inf, int hours, float rate);
    Technician();
    void setHoursWorked(int hours);
    int getHoursWorked();
    void setHourlyRate(float rate);
    float getHourlyRate();
    void pay() override;
    void showType() override;
};

#endif 
