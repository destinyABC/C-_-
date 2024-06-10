#include "Information.h"

Information::Information(int a, float w) : age(a), weight(w) {}

Information::Information() : age(0), weight(0.0) {}

void Information::setAge(int a) {
    age = a;
}

int Information::getAge() {
    return age;
}

void Information::setWeight(float w) {
    weight = w;
}

float Information::getWeight() {
    return weight;
}

void Information::displayInfo() {
    cout << "Age: " << age << ", Weight: " << weight << endl;
}
