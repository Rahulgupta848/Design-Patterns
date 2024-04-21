#include "car.cpp"
#include <iostream>
using namespace std;
class Suv : public Car{
     private:
          string name;
     public:
          Suv(string _name){
               this->name = _name;
          }
     
          void createCar(){
               cout<<"Creating "<<this->name <<" suv"<<endl;
          }
};
