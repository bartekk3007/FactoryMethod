#include <iostream>
#include "Factory.hpp"
#include "Vehicle.hpp"
#include "Boat.hpp"
#include "Car.hpp"
#include "Plane.hpp"
#include "Evehicle.hpp"

int main()
{
	Vehicle* v1 = Factory::createVehicle(EVehicle::Boat);
	v1->introduce();

	return 0;
}