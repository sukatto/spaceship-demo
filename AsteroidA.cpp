#include "AsteroidA.hpp"
#include <SFML/Graphics.hpp>

// default constructor
AsteroidA::AsteroidA()
{
	angle = 0;
	linSpeed = 0;
	setPointCount(8);
	setLocation(0, 0);
	setFillColor(sf::Color::Yellow);
}

// constructor given initial position, angle, and linear speed
AsteroidA::AsteroidA(float initX, float initY, float angle, float linSpeed)
{
	this->angle = angle;
	this->linSpeed = linSpeed;
	setPointCount(8);
	setLocation(initX, initY);
	setFillColor(sf::Color::Yellow);
}

// sets a new location for the asteroid
void AsteroidA::setLocation(float newX, float newY)
{
	setPoint(0, sf::Vector2f(newX, newY));
	setPoint(1, sf::Vector2f(newX + 20, newY));
	setPoint(2, sf::Vector2f(newX + 40, newY + 30));
	setPoint(3, sf::Vector2f(newX + 50, newY + 50));
	setPoint(4, sf::Vector2f(newX + 20, newY + 60));
	setPoint(5, sf::Vector2f(newX + 10, newY + 50));
	setPoint(6, sf::Vector2f(newX, newY + 60));
	setPoint(7, sf::Vector2f(newX - 20, newY + 30));
}
