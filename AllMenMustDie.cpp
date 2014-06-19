#include <iostream>
#include <conio.h>
#include <string>
#include "GameFactory.h"


int main()
{
	GameFactory* factory = new GameFactory();
	while (factory->playerWantsNewGame())
	{
		factory->runNewGame();
	}
	return 0;
}