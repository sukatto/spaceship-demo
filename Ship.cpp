#include "Ship.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

// getter function for x coordinate of first point
float Ship::getXLocation() const
{
	return getPoint(0).x;
}

// getter function for y coordinate of first point
float Ship::getYLocation() const
{
	return getPoint(0).y;
}

// setter function for orientation of the ship
void Ship::setOrientation(char newOr)
{
	orientation = newOr;
}

// getter function for orientation of the ship
char Ship::getOrientation() const
{
	return orientation;
}

// moves the ship in a direction depending on the orientation
void Ship::move()
{
	if (orientation == 'R')
	{
		if (getXLocation() >= 1500)
			setLocation(0, getYLocation());
		else
		setLocation(getXLocation() + getSpeed(), getYLocation());
	}
	if (orientation == 'L')
	{
		if (getXLocation() <= 0)
			setLocation(1500, getYLocation());
		else
		setLocation(getXLocation() - getSpeed(), getYLocation());
	}
	if (orientation == 'U')
	{
		if (getYLocation() <= 0)
			setLocation(getXLocation(), 900);
		else
		setLocation(getXLocation(), getYLocation() - getSpeed());
	}
	if (orientation == 'D')
	{
		if (getYLocation() >= 900)
			setLocation(getXLocation(), 0);
		else
		setLocation(getXLocation(), getYLocation() + getSpeed());
	}
}

// setter function for speed
void Ship::setSpeed(float newSpeed)
{
	speed = newSpeed;
}

// getter function for speed
float Ship::getSpeed() const
{
	return speed;
}

// returns whether or not the ship has any stored bullets left
bool Ship::isEmpty() const
{
	return (bullets.size() == 0);
}

// function to fire stored bullets from ship
void Ship::fire()
{
	// if the stored bullets have not run out, one is moved from the stored bullets to the launched bullets; the launched bullet is then given an orientation based on the orientation of the ship at the time
	if (!isEmpty())
	{
		launched.push_back(bullets.front());
		bullets.pop_front();
		if (orientation == 'R')
		{
			launched.back().setPosition(getXLocation() + 50, getYLocation() + 15);
			launched.back().setOrientation('R');
		}
		if (orientation == 'L')
		{
			launched.back().setPosition(getXLocation() - 50, getYLocation() + 15);
			launched.back().setOrientation('L');
		}
		if (orientation == 'U')
		{
			launched.back().setPosition(getXLocation() - 15, getYLocation() - 50);
			launched.back().setOrientation('U');
		}
		if (orientation == 'D')
		{
			launched.back().setPosition(getXLocation() - 15, getYLocation() + 50);
			launched.back().setOrientation('D');
		}
	}
}

// function to move the bullets
void Ship::moveBullets(sf::RenderWindow &window)
{
	// iterator goes through the list of launched bullets and increments their position based on their orientation; it will also reset their position to the beginning/end of the window boundaries if they reach the end/beginning
	list<Bullet>::iterator i;
	if (!launched.empty())
	{
		for (i = launched.begin(); i != launched.end(); i++)
		{
			if (i->getOrientation() == 'R')
			{
				if (i->getPosition().x > 1500)
					i->setPosition(0, i->getPosition().y);
				else
					i->setPosition(i->getPosition().x + 3, i->getPosition().y);
			}
			if (i->getOrientation() == 'L')
			{
				if (i->getPosition().x < 0)
					i->setPosition(1500, i->getPosition().y);
				else
					i->setPosition(i->getPosition().x - 3, i->getPosition().y);
			}
			if (i->getOrientation() == 'U')
			{
				if (i->getPosition().y < 0)
					i->setPosition(i->getPosition().x, 900);
				else
					i->setPosition(i->getPosition().x, i->getPosition().y - 3);
			}
			if (i->getOrientation() == 'D')
			{
				if (i->getPosition().y > 900)
					i->setPosition(i->getPosition().x, 0);
				else
					i->setPosition(i->getPosition().x, i->getPosition().y + 3);
			}
			// draws the current bullet in the window
			window.draw(*i);
		}
	}
}

void Ship::draw(sf::RenderWindow &window)
{
	// draws the ship in the window, and moves/draws the launched bullets
	window.draw(*this);
	moveBullets(window);
}
