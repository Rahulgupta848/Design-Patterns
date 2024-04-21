#include "car.cpp"
#include <iostream>
using namespace std;
class Sedan : public Car{
     private:
          string name;
     public:
          Sedan(string _name){
               this->name = _name;
          }
     
          void createCar(){
               cout<<"Creating "<<this->name <<" sedan"<<endl;
          }
};