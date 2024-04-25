#include<iostream>
#include "../headers/logger.h"
using namespace std;
#include<mutex>
static mutex m;
int Logger::counter = 0;
Logger* Logger::loggerInstance = nullptr;
Logger::Logger(){
     counter++;
     cout<<"logger instance is created "<< counter <<endl;
}

void Logger::logMssg(string str){
     cout<<str<<endl;
}

Logger* Logger::createLogger(){
     m.lock();
     if(loggerInstance == nullptr){
          loggerInstance = new Logger();
     }
     m.unlock();
     return loggerInstance;
}