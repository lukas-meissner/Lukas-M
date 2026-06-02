#include <iostream>

class Display
{
public:
    void show_temperature(float value)
    {
        std::cout << "Display: " << value << " C\n";
    }
};

class Logger
{
public:
    void log_temperature(float value)
    {
        std::cout << "Logger: " << value << " C\n";
    }
};

class TemperatureSensor
{
private:
    float temperature = 0.0f;

    Display display;
    Logger logger;

public:
    void set_temperature(float value)
    {
        temperature = value;

        // directly coupled to other classes
        display.show_temperature(temperature);
        logger.log_temperature(temperature);
    }
};

class Alarm
{
    public:
        void trigger(float value)
        {
            if (value > 30.0f)
            {
                std::cout << "Alarm: Temperature is too high!\n";
            }
        }
};

int main()
{
    TemperatureSensor sensor;
    Alarm alarm;

    sensor.set_temperature(33.5f); // <- anstatt 23.5f

    return 0;
}