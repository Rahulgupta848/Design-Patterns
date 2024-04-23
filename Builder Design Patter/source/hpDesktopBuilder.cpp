#include<iostream>
#include "../headers/hpDesktopBuilder.h"
#include "../headers/desktop.h"
using namespace std;

DesktopBuilder* HpDesktopBuilder::setBrand(string brand){
     this->brand = brand;
     return this;
}

DesktopBuilder* HpDesktopBuilder::setName(string name){
     this->name = name;
     return this;
}

DesktopBuilder* HpDesktopBuilder::setRam(string ram){
     this->ram = ram;
     return this;
}

DesktopBuilder* HpDesktopBuilder::setStorage(string storage){
     this->storage = storage;
     return this;
}

DesktopBuilder* HpDesktopBuilder::setCost(string cost){
     this->cost = cost;
     return this;
}

Desktop* HpDesktopBuilder::createDesktop(){
     return new Desktop(brand, name, ram, storage, cost);
}
