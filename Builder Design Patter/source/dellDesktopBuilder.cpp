#include<iostream>
#include "../headers/dellDesktopBuilder.h"
#include "../headers/desktop.h"
using namespace std;

DesktopBuilder* DellDesktopBuilder::setBrand(string brand){
     this->brand = brand;
     return this;
}

DesktopBuilder* DellDesktopBuilder::setName(string name){
     this->name = name;
     return this;
}

DesktopBuilder* DellDesktopBuilder::setRam(string ram){
     this->ram = ram;
     return this;
}

DesktopBuilder* DellDesktopBuilder::setStorage(string storage){
     this->storage = storage;
     return this;
}

DesktopBuilder* DellDesktopBuilder::setCost(string cost){
     this->cost = cost;
     return this;
}

Desktop* DellDesktopBuilder::createDesktop(){
     return new Desktop(brand, name, ram, storage, cost);
}
