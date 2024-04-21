#include<iostream>
#include "car.cpp"
#include "suv.cpp"
#include "sedan.cpp"
using namespace std;

class Factory{
     public:
          Car* addCar(string carType,string name){
               Car* c;
               if(carType == "sedan"){
                    c = new Sedan(name);
               }else if(carType == "suv"){
                    c =  new Suv(name); 
               } 
               return c;
          }
};