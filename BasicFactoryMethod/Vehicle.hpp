#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>

class Vehicle
{
public:
	virtual ~Vehicle()
	{

	}
	virtual void introduce()
	{
		std::cout << "It is a vehicle\n";
	}
};

#endif