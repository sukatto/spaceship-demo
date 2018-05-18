#include "AsteroidB.hpp"
#include <SFML/Graphics.hpp>

// default constructor
AsteroidB::AsteroidB()
{
	angle = 0;
	linSpeed = 0;
	setPointCount(10);
	setLocation(0, 0);
	setFillColor(sf::Color::Yellow);
}

// constructor given initial position, angle, and linear speed
AsteroidB::AsteroidB(float initX, float initY, float angle, float linSpeed)
{
	this->angle = angle;
	this->linSpeed = linSpeed;
	setPointCount(8);
	setLocation(initX, initY);
	setFillColor(sf::Color::Yellow);
}

// sets a new location for the asteroid
void AsteroidB::setLocation(float newX, float newY)
{
	setPoint(0, sf::Vector2f(newX, newY));
	setPoint(1, sf::Vector2f(newX + 20, newY + 20));
	setPoint(2, sf::Vector2f(newX + 30, newY));
	setPoint(3, sf::Vector2f(newX + 50, newY + 10));
	setPoint(4, sf::Vector2f(newX + 60, newY + 20));
	setPoint(5, sf::Vector2f(newX + 30, newY + 10));
	setPoint(6, sf::Vector2f(newX + 40, newY + 50));
	setPoint(7, sf::Vector2f(newX, newY + 60));
	setPoint(8, sf::Vector2f(newX, newY + 20));
	setPoint(9, sf::Vector2f(newX - 20, newY + 10));
}
