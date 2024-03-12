#ifndef BOAT_H
#define BOAT_H
#include <iostream>
#include "Vehicle.hpp"

class Boat : public Vehicle
{
public:
	Boat()
	{

	}
	void introduce() override
	{
		std::cout << "I am a boat\n";
	}
};

#endif