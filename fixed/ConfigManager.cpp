#include "ConfigManager.h"

ConfigManager::ConfigManager() {
    std::cout << "ConfigManager Initialized" << std::endl;
    settings["db_host"] = "localhost";
    settings["db_port"] = "5432";
}
