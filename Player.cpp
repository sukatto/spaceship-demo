#include "Player.hpp"
#include <SFML/Graphics.hpp>

// default constructor
Player::Player()
{
	setPointCount(15);
	setLocation(10.0, 10.0);
	orientation = 'R';
	setFillColor(sf::Color::Green);
	speed = 1.5;
	// player gets 10 bullets
	bullets.push_back(Bullet());
	bullets.push_back(Bullet());
	bullets.push_back(Bullet());
	bullets.push_back(Bullet());
	bullets.push_back(Bullet());
	bullets.push_back(Bullet());
	bullets.push_back(Bullet());
	bullets.push_back(Bullet());
	bullets.push_back(Bullet());
	bullets.push_back(Bullet());
}

// constructor for setting initial location of ship
Player::Player(float initX, float initY)
{
	setPointCount(15);
	setLocation(initX, initY);
	orientation = 'R';
	setFillColor(sf::Color::Green);
	speed = 1.5;
	// player gets 10 bullets
	bullets.push_back(Bullet());
	bullets.push_back(Bullet());
	bullets.push_back(Bullet());
	bullets.push_back(Bullet());
	bullets.push_back(Bullet());
	bullets.push_back(Bullet());
	bullets.push_back(Bullet());
	bullets.push_back(Bullet());
	bullets.push_back(Bullet());
	bullets.push_back(Bullet());
}

// following function sets the new location of the ship based on the x and y coordinates sent to it; the first point of the ship is placed at the specified coordinates and the rest of the points placed relative to this first point; the coordinates of the points are further determined based on the orientation of the ship
void Player::setLocation(float newX, float newY)
{
	if (orientation == 'R')
	{
		setPoint(0, sf::Vector2f(newX, newY));
		setPoint(1, sf::Vector2f(newX + 10, newY));
		setPoint(2, sf::Vector2f(newX + 20, newY + 10));
		setPoint(3, sf::Vector2f(newX + 10, newY - 10));
		setPoint(4, sf::Vector2f(newX + 40, newY));
		setPoint(5, sf::Vector2f(newX + 30, newY + 10));
		setPoint(6, sf::Vector2f(newX + 40, newY + 10));
		setPoint(7, sf::Vector2f(newX + 50, newY + 15));
		setPoint(8, sf::Vector2f(newX + 40, newY + 20));
		setPoint(9, sf::Vector2f(newX + 30, newY + 20));
		setPoint(10, sf::Vector2f(newX + 40, newY + 30));
		setPoint(11, sf::Vector2f(newX + 10, newY + 40));
		setPoint(12, sf::Vector2f(newX + 20, newY + 20));
		setPoint(13, sf::Vector2f(newX + 10, newY + 30));
		setPoint(14, sf::Vector2f(newX, newY + 30));
	}
	if (orientation == 'L')
	{
		setPoint(0, sf::Vector2f(newX, newY));
		setPoint(1, sf::Vector2f(newX - 10, newY));
		setPoint(2, sf::Vector2f(newX - 20, newY + 10));
		setPoint(3, sf::Vector2f(newX - 10, newY - 10));
		setPoint(4, sf::Vector2f(newX - 40, newY));
		setPoint(5, sf::Vector2f(newX - 30, newY + 10));
		setPoint(6, sf::Vector2f(newX - 40, newY + 10));
		setPoint(7, sf::Vector2f(newX - 50, newY + 15));
		setPoint(8, sf::Vector2f(newX - 40, newY + 20));
		setPoint(9, sf::Vector2f(newX - 30, newY + 20));
		setPoint(10, sf::Vector2f(newX - 40, newY + 30));
		setPoint(11, sf::Vector2f(newX - 10, newY + 40));
		setPoint(12, sf::Vector2f(newX - 20, newY + 20));
		setPoint(13, sf::Vector2f(newX - 10, newY + 30));
		setPoint(14, sf::Vector2f(newX, newY + 30));
	}
	if (orientation == 'U')
	{
		setPoint(0, sf::Vector2f(newX, newY));
		setPoint(1, sf::Vector2f(newX, newY - 10));
		setPoint(2, sf::Vector2f(newX - 10, newY - 20));
		setPoint(3, sf::Vector2f(newX + 10, newY - 10));
		setPoint(4, sf::Vector2f(newX, newY - 40));
		setPoint(5, sf::Vector2f(newX - 10, newY - 30));
		setPoint(6, sf::Vector2f(newX - 10, newY - 40));
		setPoint(7, sf::Vector2f(newX - 15, newY - 50));
		setPoint(8, sf::Vector2f(newX - 20, newY - 40));
		setPoint(9, sf::Vector2f(newX - 20, newY - 30));
		setPoint(10, sf::Vector2f(newX - 30, newY - 40));
		setPoint(11, sf::Vector2f(newX - 40, newY - 10));
		setPoint(12, sf::Vector2f(newX - 20, newY - 20));
		setPoint(13, sf::Vector2f(newX - 30, newY - 10));
		setPoint(14, sf::Vector2f(newX - 30, newY));
	}
	if (orientation == 'D')
	{
		setPoint(0, sf::Vector2f(newX, newY));
		setPoint(1, sf::Vector2f(newX, newY + 10));
		setPoint(2, sf::Vector2f(newX - 10, newY + 20));
		setPoint(3, sf::Vector2f(newX + 10, newY + 10));
		setPoint(4, sf::Vector2f(newX, newY + 40));
		setPoint(5, sf::Vector2f(newX - 10, newY + 30));
		setPoint(6, sf::Vector2f(newX - 10, newY + 40));
		setPoint(7, sf::Vector2f(newX - 15, newY + 50));
		setPoint(8, sf::Vector2f(newX - 20, newY + 40));
		setPoint(9, sf::Vector2f(newX - 20, newY + 30));
		setPoint(10, sf::Vector2f(newX - 30, newY + 40));
		setPoint(11, sf::Vector2f(newX - 40, newY + 10));
		setPoint(12, sf::Vector2f(newX - 20, newY + 20));
		setPoint(13, sf::Vector2f(newX - 30, newY + 10));
		setPoint(14, sf::Vector2f(newX - 30, newY));
	}
}
