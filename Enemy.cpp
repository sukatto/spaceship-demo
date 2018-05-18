#include "Enemy.hpp"
#include <SFML/Graphics.hpp>

// default constructor
Enemy::Enemy()
{
	setPointCount(13);
	setLocation(10.0, 10.0);
	orientation = 'U';
	setFillColor(sf::Color::Red);
	speed = 1;
}

// default constructor
Enemy::Enemy(float initX, float initY)
{
	setPointCount(13);
	setLocation(initX, initY);
	orientation = 'U';
	setFillColor(sf::Color::Red);
	speed = 1;
}

// following function sets the new location of the ship based on the x and y coordinates sent to it; the first point of the ship is placed at the specified coordinates and the rest of the points placed relative to this first point; the coordinates of the points are further determined based on the orientation
void Enemy::setLocation(float newX, float newY)
{
	if (orientation == 'R')
	{
		setPoint(0, sf::Vector2f(newX, newY));
		setPoint(1, sf::Vector2f(newX + 15, newY));
		setPoint(2, sf::Vector2f(newX + 15, newY - 15));
		setPoint(3, sf::Vector2f(newX + 30, newY - 15));
		setPoint(4, sf::Vector2f(newX + 45, newY - 7.5));
		setPoint(5, sf::Vector2f(newX + 45, newY));
		setPoint(6, sf::Vector2f(newX + 60, newY + 7.5));
		setPoint(7, sf::Vector2f(newX + 45, newY + 15));
		setPoint(8, sf::Vector2f(newX + 45, newY + 22.5));
		setPoint(9, sf::Vector2f(newX + 30, newY + 30));
		setPoint(10, sf::Vector2f(newX + 15, newY + 30));
		setPoint(11, sf::Vector2f(newX + 15, newY + 15));
		setPoint(12, sf::Vector2f(newX, newY + 15));
	}
	if (orientation == 'L')
	{
		setPoint(0, sf::Vector2f(newX, newY));
		setPoint(1, sf::Vector2f(newX - 15, newY));
		setPoint(2, sf::Vector2f(newX - 15, newY - 15));
		setPoint(3, sf::Vector2f(newX - 30, newY - 15));
		setPoint(4, sf::Vector2f(newX - 45, newY - 7.5));
		setPoint(5, sf::Vector2f(newX - 45, newY));
		setPoint(6, sf::Vector2f(newX - 60, newY + 7.5));
		setPoint(7, sf::Vector2f(newX - 45, newY + 15));
		setPoint(8, sf::Vector2f(newX - 45, newY + 22.5));
		setPoint(9, sf::Vector2f(newX - 30, newY + 30));
		setPoint(10, sf::Vector2f(newX - 15, newY + 30));
		setPoint(11, sf::Vector2f(newX - 15, newY + 15));
		setPoint(12, sf::Vector2f(newX, newY + 15));
	}
	if (orientation == 'U')
	{
		setPoint(0, sf::Vector2f(newX, newY));
		setPoint(1, sf::Vector2f(newX, newY - 15));
		setPoint(2, sf::Vector2f(newX - 15, newY - 15));
		setPoint(3, sf::Vector2f(newX - 15, newY - 30));
		setPoint(4, sf::Vector2f(newX - 7.5, newY - 45));
		setPoint(5, sf::Vector2f(newX, newY - 45));
		setPoint(6, sf::Vector2f(newX + 7.5, newY - 60));
		setPoint(7, sf::Vector2f(newX + 15, newY - 45));
		setPoint(8, sf::Vector2f(newX + 22.5, newY - 45));
		setPoint(9, sf::Vector2f(newX + 30, newY - 30));
		setPoint(10, sf::Vector2f(newX + 30, newY - 15));
		setPoint(11, sf::Vector2f(newX + 15, newY - 15));
		setPoint(12, sf::Vector2f(newX + 15, newY));
	}
	if (orientation == 'D')
	{
		setPoint(0, sf::Vector2f(newX, newY));
		setPoint(1, sf::Vector2f(newX, newY + 15));
		setPoint(2, sf::Vector2f(newX - 15, newY + 15));
		setPoint(3, sf::Vector2f(newX - 15, newY + 30));
		setPoint(4, sf::Vector2f(newX - 7.5, newY + 45));
		setPoint(5, sf::Vector2f(newX, newY + 45));
		setPoint(6, sf::Vector2f(newX + 7.5, newY + 60));
		setPoint(7, sf::Vector2f(newX + 15, newY + 45));
		setPoint(8, sf::Vector2f(newX + 22.5, newY + 45));
		setPoint(9, sf::Vector2f(newX + 30, newY + 30));
		setPoint(10, sf::Vector2f(newX + 30, newY + 15));
		setPoint(11, sf::Vector2f(newX + 15, newY + 15));
		setPoint(12, sf::Vector2f(newX + 15, newY));
	}
}
