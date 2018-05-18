#ifndef ASTEROIDB_H
#define ASTEROIDB_H
#include <SFML/Graphics.hpp>
#include "Asteroid.hpp"

using namespace std;

class AsteroidB: public Asteroid
{
	public:
	AsteroidB();
	AsteroidB(float initX, float initY, float angle, float linSpeed);
	// setter and getter functions for the x and y coordinates of the first point on the asteroid
	virtual void setLocation(float newX, float newY);
};	

# endif
