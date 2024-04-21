#include<iostream>
#include "./src/factory.cpp"
#include "./src/car.cpp"
using namespace std;

int main(){
     Factory f;
     Car* c1 = f.addCar("suv","Scorpio");
     c1->createCar();
     return 0;
}