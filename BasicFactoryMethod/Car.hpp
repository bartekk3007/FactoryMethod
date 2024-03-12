#ifndef CAR_H
#define CAR_H
#include <iostream>
#include "Vehicle.hpp"

class Car : public Vehicle
{
public:
	Car()
	{

	}
	void introduce()
	{
		std::cout << "I am a car\n";
	}
};

#endif