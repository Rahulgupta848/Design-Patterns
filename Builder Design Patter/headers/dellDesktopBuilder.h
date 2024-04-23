#ifndef DELLDESKTOPBUILDER_H
#define DELLDESKTOPBUILDER_H

#include <iostream>
using namespace std;
#include "desktopBuilder.h"
#include "desktop.h"

class DellDesktopBuilder : public DesktopBuilder
{
     private:
          string brand;
          string name;
          string ram;
          string storage;
          string cost;

     public:
          DesktopBuilder* setBrand(string str);
          DesktopBuilder* setName(string str);
          DesktopBuilder* setRam(string str);
          DesktopBuilder* setStorage(string str);
          DesktopBuilder* setCost(string str);
          Desktop* createDesktop();
};

#endif