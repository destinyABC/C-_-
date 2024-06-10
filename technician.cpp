#include "Technician.h"

Technician::Technician(int i, string n, Information inf, int hours, float rate)
    : Employee(i, n, inf), hoursWorked(hours), hourlyRate(rate) {}

Technician::Technician() : hoursWorked(0), hourlyRate(0.0) {}

void Technician::setHoursWorked(int hours) {
    hoursWorked = hours;
}

int Technician::getHoursWorked() {
    return hoursWorked;
}

void Technician::setHourlyRate(float rate) {
    hourlyRate = rate;
}

float Technician::getHourlyRate() {
    return hourlyRate;
}

void Technician::pay() {
    salary = hoursWorked * hourlyRate;
}

void Technician::showType() {
    cout << "Technician" << endl;
}
