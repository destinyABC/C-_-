#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Information.h"
using namespace std;

class Employee {
protected:
    static string CompanyName;
    int id;
    string name;
    Information info;
    float salary;

public:
    Employee(int i, string n, Information inf);
    Employee();
    static void setCompanyName(string cname);
    void setId(int i);
    int getId();
    void setName(string n);
    string getName();
    void setInfo(Information inf);
    Information getInfo();
    virtual void pay() = 0;  
    virtual void showType() = 0;  
    void displayEmployeeInfo();
    void writeFile();
    float getSalary(); // 新增的获取工资的方法
};

#endif 
