#include "Database.h"

Database::Database() {
    dbHost = globalConfigManager.getSetting("db_host");
    dbPort = globalConfigManager.getSetting("db_port");

    std::cout << "Connecting to DB at " << dbHost << ":" << dbPort << std::endl;
}

Database globalDatabase;