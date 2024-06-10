#ifndef INFORMATION_H
#define INFORMATION_H

#include <iostream>
using namespace std;

class Information {
private:
    int age;
    float weight;

public:
    Information(int a, float w);
    Information();
    void setAge(int a);
    int getAge();
    void setWeight(float w);
    float getWeight();
    void displayInfo();
};

#endif 
