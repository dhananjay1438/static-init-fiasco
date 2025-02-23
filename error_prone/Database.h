#ifndef DATABASE_H
#define DATABASE_H

#include "ConfigManager.h"

class Database {
public:
    Database();  

private:
    std::string dbHost;
    std::string dbPort;
};

extern Database globalDatabase;

#endif