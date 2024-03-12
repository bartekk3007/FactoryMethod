#ifndef PLANE_H
#define PLANE_H
#include <iostream>
#include "Vehicle.hpp"

class Plane : public Vehicle
{
public:
	Plane()
	{

	}
	void introduce() override
	{
		std::cout << "I am a plane\n";
	}
};

#endif