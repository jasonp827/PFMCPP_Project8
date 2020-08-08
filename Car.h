#pragma once
#include "Vehicle.h"

struct Car : public Vehicle
{
    Car(const std::string& n);

    void closeWindows();
    void tryToEvade() override;
};
