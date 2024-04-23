#ifndef HPDESKTOPBUILDER_H
#define HPDESKTOPBUILDER_H

#include <iostream>
using namespace std;
#include "desktopBuilder.h"
#include "desktop.h"

class HpDesktopBuilder : public DesktopBuilder
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