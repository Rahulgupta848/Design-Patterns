#ifndef DESKTOPBUILDER_H
#define DESKTOPBUILDER_H

#include <iostream>
#include "desktop.h"
using namespace std;
class DesktopBuilder
{
     public:
          virtual DesktopBuilder *setBrand(string) = 0;
          virtual DesktopBuilder *setName(string) = 0;
          virtual DesktopBuilder *setRam(string) = 0;
          virtual DesktopBuilder *setStorage(string) = 0;
          virtual DesktopBuilder *setCost(string) = 0;
          virtual Desktop *createDesktop() = 0;
};

#endif