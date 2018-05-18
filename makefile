all: spaceshipDemo

spaceshipDemo: main.o GameEngine.o Ship.o Player.o Enemy.o Bullet.o Asteroid.o AsteroidA.o AsteroidB.o -lsfml-graphics -lsfml-window -lsfml-system
	g++ main.o GameEngine.o Ship.o Player.o Enemy.o Bullet.o Asteroid.o AsteroidA.o AsteroidB.o -o spaceshipDemo -lsfml-graphics -lsfml-window -lsfml-system

main.o: main.cpp
	g++ -c main.cpp

GameEngine.o: GameEngine.cpp
	g++ -c GameEngine.cpp

Ship.o: Ship.cpp
	g++ -c Ship.cpp

Player.o: Player.cpp
	g++ -c Player.cpp

Enemy.o: Enemy.cpp
	g++ -c Enemy.cpp

Bullet.o: Bullet.cpp
	g++ -c Bullet.cpp

Asteroid.o: Asteroid.cpp
	g++ -c Asteroid.cpp

AsteroidA.o: AsteroidA.cpp
	g++ -c AsteroidA.cpp

AsteroidB.o: AsteroidB.cpp
	g++ -c AsteroidB.cpp

clean:
	rm *.o spaceshipDemo
