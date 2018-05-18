#include "GameEngine.hpp"

#define DEF_WIDTH 1500
#define DEF_HEIGHT 900

// constructor initializes the window and starts the ship at x = 0, and y in the middle of the window
GameEngine::GameEngine()
{
  window.create(sf::VideoMode(DEF_WIDTH, DEF_HEIGHT), "SFML window");
  player.setLocation(500.0, 430.0);
  enemy.setLocation(1000.0, 430.0);
  astA.setLocation(750.0, 200.0);
  astA.setLinSpeed(10.0);
  astA.setAngle(45.0);
  astB.setLocation(300.0, 450.0);
  astB.setLinSpeed(25.0);
  astB.setAngle(150.0);
}


// constructor initializes the window with specified name, width, and height and starts the ship at x = 0, and y in the middle of the window
GameEngine::GameEngine(string windowName, int width, int height)
{
  window.create(sf::VideoMode(width, height), windowName);
  player.setLocation(500.0, 430.0);
  enemy.setLocation(1000.0, 430.0);
  astA.setLocation(750.0, 200.0);
  astA.setLinSpeed(10.0);
  astA.setAngle(45.0);
  astB.setLocation(300.0, 450.0);
  astB.setLinSpeed(25.0);
  astB.setAngle(150.0);
}

void GameEngine::runGame()
{
  while (window.isOpen())
    {
      handleEvents();
      // window is cleared, ship and launched bullets are drawn in window, and it is re-displayed
      window.clear();
      player.draw(window);
      enemy.draw(window);
      astA.draw(window);
      astB.draw(window);
      window.display();
      // delay between frames
      sf::sleep(sf::seconds(0.01));
      // moves the player and ship classes
      player.move();
      enemy.move();
      astA.move();
      astB.move();
    }
}

// following function checks to see if the close button is selected; if it is, the window closes and the program terminates
void GameEngine::handleEvents()
{
  while (window.pollEvent(event))
    {
      // Request for closing the window                                     
      if (event.type == sf::Event::Closed)
	window.close();
      // checks to see if a key is pressed; if so, it will change the orientation of the player depending on which key was pressed
      if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad6))
	player.setOrientation('R');
      if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) || sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad8))
	player.setOrientation('U');
      if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad4))
	player.setOrientation('L');
      if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) || sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad2))
	player.setOrientation('D');
      // if F key or 5 on the Numpad are pressed, a bullet is fired
      if (sf::Keyboard::isKeyPressed(sf::Keyboard::F) || sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad5))
	player.fire();
    }

}

