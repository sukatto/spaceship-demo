#ifndef BULLET_H
#define BULLET_H
#include <SFML/Graphics.hpp>

class Bullet: public sf::CircleShape
{
	public:
	// default constructor and constructor for initial size & color
	Bullet();
	Bullet(float radius, sf::Color color);
	// setter and getter functions for bullet orientation
	void setOrientation(char newOr);
	char getOrientation() const;

	private:
	// only private variable is orientation of the bullet
	char orientation;
};

# endif
