#ifndef PLAYER_H
#define PLAYER_H
#include <SFML/Graphics.hpp>
#include "Ship.hpp"

using namespace std;

class Player: public Ship
{
	public:
	// default constructor and constructor for initial position
	Player();
	Player(float initX, float initY);
	// function for setting new location of the ship and redrawing it
	virtual void setLocation(float newX, float newY);
};

# endif
