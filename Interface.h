#include <iostream>
#include <conio.h>
#include <string>
#include "Wizard.h"
#include "Hobbit.h"
#include "Arcanist.h"
#include "Situation.h"
#include "Character.h"

class Interface
{
public:
	void displayText(std::string text);
	void askNewGame();
	bool playerWantsNewGame();
	bool getYesOrNo();
	void gameStartMessage(Character* hero);
	void gameEndMessage();
	void showSituation(Situation* currentSituation);
	std::string getCharacterName();
	Gender getGender();
	Race getRace();
	HogwartsHouse getHouse();
	int getPlayerChoice();
};