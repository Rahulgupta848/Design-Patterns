#ifndef LOGGER_H
#define LOGGER_H
#include <iostream>
using namespace std;
class Logger
{
     private:
          static int counter;
          static Logger* loggerInstance;
          Logger();
     public:
          void logMssg(string str);
          static Logger* createLogger();
};

#endif