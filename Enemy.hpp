#ifndef ENEMY_H
#define ENEMY_H
#include <SFML/Graphics.hpp>
#include "Ship.hpp"

class Enemy: public Ship
{
	public:
	// constructors for enemy
	Enemy();
	Enemy(float initX, float initY);
	// sets a new location for the enemy
	virtual void setLocation(float newX, float newY);
};

# endif
