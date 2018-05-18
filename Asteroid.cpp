#include <SFML/Graphics.hpp>
#include <iostream>
#include <math.h>
#include "Asteroid.hpp"

#define PI 3.141592653

// setters and getters for locations and angle
float Asteroid::getXLocation() const
{
	return getPoint(0).x;
}

float Asteroid::getYLocation() const
{
	return getPoint(0).y;
}

void Asteroid::setAngle(float newAngle)
{
	angle = newAngle;
}

float Asteroid::getAngle() const
{
	return angle;
}

// moves the asteroid
void Asteroid::move()
{
	setLocation(this->getXLocation() + cos(angle)*(PI/180.0)*linSpeed, this->getYLocation() + sin(angle)*(PI/180.0)*linSpeed);
	if (this->getXLocation() >= 1500)
		setLocation(0, this->getYLocation() + sin(angle)*(PI/180.0)*linSpeed);
	else if (this->getXLocation() <= 0)
		setLocation(1500, this->getYLocation() + sin(angle)*(PI/180.0)*linSpeed);
	if (this->getYLocation() >= 900)
		setLocation(this->getXLocation() + cos(angle)*(PI/180.0)*linSpeed, 0);
	else if (this->getYLocation() <= 0)
		setLocation(this->getXLocation() + cos(angle)*(PI/180.0)*linSpeed, 900);
}

// setters and getters for the linear speed of the asteroid
void Asteroid::setLinSpeed(float newSpeed)
{
	linSpeed = newSpeed;
}

float Asteroid::getLinSpeed() const
{
	return linSpeed;
}

// draws the asteroid in the window
void Asteroid::draw(sf::RenderWindow &window)
{
	window.draw(*this);
}
