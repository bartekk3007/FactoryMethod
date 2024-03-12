#ifndef FACTORY_H
#define FACTORY_H
#include <iostream>
#include "Vehicle.hpp"
#include "Boat.hpp"
#include "Car.hpp"
#include "Plane.hpp"
#include "Evehicle.hpp"

class Factory
{
public:

	static Vehicle* createVehicle(EVehicle ev)
	{
		if (ev == EVehicle::Boat)
		{
			return new Boat();
		}
		else if (ev == EVehicle::Plane)
		{
			return new Plane();
		}
		else if (ev == EVehicle::Car)
		{
			return new Car();
		}
		return nullptr;
	}
};

#endif