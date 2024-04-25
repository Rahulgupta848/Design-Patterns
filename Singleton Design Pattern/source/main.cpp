#include <iostream>
#include <thread>
#include "../headers/logger.h"
using namespace std;
void fun1()
{
     Logger *l1 = Logger::createLogger();
     l1->logMssg("logger 1");
}

void fun2()
{
     Logger *l2 = Logger::createLogger();
     l2->logMssg("logger 2");
}

int main()
{
     thread t1(fun1);
     thread t2(fun2);

     t1.join();
     t2.join();

     return 0;
}