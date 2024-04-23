#include<iostream>
using namespace std;
#include "../headers/desktop.h"
Desktop::Desktop(string brand,string name,string ram,string storage ,string cost)
{
    this->brand = brand;
    this->name = name;
    this->ram = ram;
    this->storage = storage;
    this->cost = cost;
}

void Desktop::getDesktopDetails()
{
    cout<<"--------------------------"<<endl;
    cout<<"Brand : "<<brand<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Ram : "<<ram<<endl;
    cout<<"Storage : "<<storage<<endl;
    cout<<"Cost : "<<cost<<endl;
    cout<<"--------------------------"<<endl;
}