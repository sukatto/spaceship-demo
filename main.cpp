#include "GameEngine.hpp"

int main()
{
  // object of game is made, and game is run
  GameEngine e("Asteroids!", 1500, 900);
  e.runGame();
  return 0;
}
