#ifndef DESKTOP_H
#define DESKTOP_H
#include<iostream>
using namespace std;


class Desktop
{
    private:
        string brand;
        string name;
        string ram;
        string storage;
        string cost;
    public:
        Desktop(string brand,string name,string ram,string storage ,string cost);
        void getDesktopDetails();
};

#endif // DESKTOP_H