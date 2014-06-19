#ifndef GAMEFACTORY_H_GUARD
#define GAMEFACTORY_H_GUARD

#include "Game.h"
#include "Character.h"
#include "Interface.h"

class GameFactory
{
private:
	Interface* interface;
	Character* createCharacter();

public:
	GameFactory(void);
	bool playerWantsNewGame();
	void runNewGame();
	~GameFactory(void);
};

#endif