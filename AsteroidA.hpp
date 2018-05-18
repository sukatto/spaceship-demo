#ifndef ASTEROIDA_H
#define ASTEROIDA_H
#include <SFML/Graphics.hpp>
#include "Asteroid.hpp"

using namespace std;

class AsteroidA: public Asteroid
{
	public:
	AsteroidA();
	AsteroidA(float initX, float initY, float angle, float linSpeed);
	// setter and getter functions for the x and y coordinates of the first point on the asteroid
	virtual void setLocation(float newX, float newY);
};	

# endif
