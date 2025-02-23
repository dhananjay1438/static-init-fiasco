#ifndef DATABASE_H
#define DATABASE_H

#include "ConfigManager.h"

class Database {
public:
    Database();  // Constructor remains unchanged

private:
    std::string dbHost;
    std::string dbPort;
};

//  Keep extern globalDatabase (No change needed)
extern Database globalDatabase;

#endif