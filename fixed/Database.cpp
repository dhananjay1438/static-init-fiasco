#include "Database.h"

Database::Database()
    : dbHost(ConfigManager::getInstance().getSetting("db_host")),  // Safe Initialization
      dbPort(ConfigManager::getInstance().getSetting("db_port")) {

    std::cout << "Connecting to DB at " << dbHost << ":" << dbPort << std::endl;
}

Database globalDatabase;