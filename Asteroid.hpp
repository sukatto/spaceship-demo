#ifndef ASTEROID_H
#define ASTEROID_H
#include <SFML/Graphics.hpp>

using namespace std;

class Asteroid: public sf::ConvexShape
{
	public:
	// setter and getter functions for the x and y coordinates of the first point on the asteroid, as well as the angle of the asteroid
	virtual void setLocation(float newX, float newY) = 0;
	float getXLocation() const;
	float getYLocation() const;
	void setAngle(float newAngle);
	float getAngle() const;
	// function that moves the asteroid depending on the orientation
	void move();
	// functions for setting and getting the speed of the asteroid
	void setLinSpeed(float newSpeed);
	float getLinSpeed() const;
	void draw(sf::RenderWindow &window);

	protected:
	// variables for the angle the asteroid moves at, as well as linear speed
	float angle;
	float linSpeed;
};	

# endif
