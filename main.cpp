/*
	91.201 Assignment 8 main.cpp
	Purpose: To make the player ship move in the direction specified by the user, as well as the enemy

	@author Scott Norton
	@version 1.0 11/21/2015
*/

#include "GameEngine.hpp"

int main()
{
  // object of game is made, and game is run
  GameEngine e("Asteroids!", 1500, 900);
  e.runGame();
  return 0;
}
