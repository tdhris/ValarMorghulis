#ifndef GAME_H_GUARD
#define GAME_H_GUARD

#include "Character.h"
#include "Situation.h"

class Game
{
private:
	Character* hero;
	Situation* currentSituation;
	Situation* initialize();

public:
	Game(Character* hero);
	bool isRunning() const;
	Character* getCharacter() const;
	Situation* getCurrentSituation() const;
	void setCurrentSituation(Situation* newSituation);
	void makeChoice(int choiceIndex);
};

#endif