#ifndef MENU_H
#define MENU_H

#include "Info.h"

class Menu {
private:
    Info info;

public:
    void select_menu();
    void handle_menu(int choice);
    void addEmployeeMenu();
};

#endif 
