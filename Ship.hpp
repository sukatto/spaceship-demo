#ifndef SHIP_H
#define SHIP_H
#include <SFML/Graphics.hpp>
#include <list>
#include "Bullet.hpp"

using namespace std;

class Ship: public sf::ConvexShape
{
	public:
	// setter and getter functions for the x and y coordinates of the first point on the ship, as well as the orientation of the ship
	virtual void setLocation(float newX, float newY) = 0;
	float getXLocation() const;
	float getYLocation() const;
	void setOrientation(char newOr);
	char getOrientation() const;
	// function that moves the ship depending on the orientation
	void move();
	// functions for setting and getting the speed of the ship
	void setSpeed(float newSpeed);
	float getSpeed() const;
	bool isEmpty() const;
	void fire();
	void moveBullets(sf::RenderWindow &window);
	void draw(sf::RenderWindow &window);

	protected:
	// variables for the orientation and speed of the ship
	char orientation;
	float speed;
	// lists for stored bullets & launched bullets
	list<Bullet> bullets;
	list<Bullet> launched;
};	

# endif
