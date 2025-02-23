#ifndef CONFIG_MANAGER_H
#define CONFIG_MANAGER_H

#include <iostream>
#include <map>

class ConfigManager {
public:
    static ConfigManager& getInstance() {  
        static ConfigManager instance;
        return instance;
    }

    std::string getSetting(const std::string& key) {
        return settings[key];  
    }

private:
    ConfigManager();  
    std::map<std::string, std::string> settings;
};


#endif