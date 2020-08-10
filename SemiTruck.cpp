#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n){}

SemiTruck::~SemiTruck() = default;
SemiTruck::SemiTruck(const SemiTruck&) = default;
SemiTruck& SemiTruck::operator=(const SemiTruck&) = default;

void SemiTruck::driveSafely()
{
    setSpeed(50);
    std::cout<< "Definitely don't want to get into an accident driving this thing\n" << std::endl;
}

void SemiTruck::pullOver()
{
    setSpeed(0);
    std::cout<< "Oh god.\n" << std::endl;
}

