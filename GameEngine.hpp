#ifndef GAMEENGINE_H
#define GAMEENGINE_H
#include "SFML/Graphics.hpp"
#include "Ship.hpp"
#include "Player.hpp"
#include "Enemy.hpp"
#include "Asteroid.hpp"
#include "AsteroidA.hpp"
#include "AsteroidB.hpp"
#include <string>

using std::string;

class GameEngine
{

// constructors for Game engine given name of window and its width and length, and functions for starting the game and handling events
public:
  GameEngine();
  GameEngine(string windowName, int width, int height);
  void runGame();
  void handleEvents();
// private members are the window itself, an event, and a ship
private:
  sf::RenderWindow window;
  sf::Event event;
  // creates a player
  Player player;
  // creates an enemy
  Enemy enemy;
  // creates two asteroids, each of a different type
  AsteroidA astA;
  AsteroidB astB;
};


#endif
