#include "../headers/desktop.h"
#include "../headers/dellDesktopBuilder.h"
#include "../headers/hpDesktopBuilder.h"
#include "../headers/desktopBuilder.h"
#include<iostream>
using namespace std;
int main()
{    
     DesktopBuilder *d1 = new DellDesktopBuilder();
     d1->setBrand("Dell")->setName("Omen")->setCost("70000")->createDesktop()->getDesktopDetails();

     DesktopBuilder *d2 = new HpDesktopBuilder();
     d2->setBrand("Hp")->setName("Pavalion")->setCost("80000")->setRam("16GB")->setStorage("1TB")->createDesktop()->getDesktopDetails();
     return 0;
}