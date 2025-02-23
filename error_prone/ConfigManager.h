#ifndef CONFIG_MANAGER_H
#define CONFIG_MANAGER_H

#include <iostream>
#include <map>

class ConfigManager {
public:
    ConfigManager() {
        std::cout << "ConfigManager Initialized" << std::endl;
        settings["db_host"] = "localhost";
        settings["db_port"] = "5432";
    }

    std::string getSetting(const std::string& key) {
        return settings[key]; 
    }

private:
    std::map<std::string, std::string> settings;
};

extern ConfigManager globalConfigManager;

#endif