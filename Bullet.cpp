#include "Bullet.hpp"
#include <SFML/Graphics.hpp>

// default constructor
Bullet::Bullet()
{
	setRadius(2);
	setFillColor(sf::Color::White);
}

// constructor given initial radius & color
Bullet::Bullet(float radius, sf::Color color)
{
	setRadius(radius);
	setFillColor(color);
}

// setter function for orientation
void Bullet::setOrientation(char newOr)
{
	orientation = newOr;
}


// getter function for orientation
char Bullet::getOrientation() const
{
	return orientation;
}
