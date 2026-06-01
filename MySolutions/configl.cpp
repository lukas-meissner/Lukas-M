#include <iostream>
#include <vector>
#include <stdexcept>

class ConfigError : public std::logic_error
{
    public:
    ConfigError(std::string message) : std::logic_error(message) {};
};

class ConfigLoader
{
    public: 
        bool load(std::string filename)
        {
            throw
        }
};