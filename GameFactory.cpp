#include "GameFactory.h"

GameFactory::GameFactory()
{
	this->interface = new Interface();
}

void GameFactory::runNewGame()
{
	Character* hero = createCharacter();
	this->interface->gameStartMessage(hero);
	Game* newGame = new Game(hero);

	while (newGame->isRunning())
	{
		Situation* present = newGame->getCurrentSituation();
		this->interface->showSituation(present);
		int playerChoice = this->interface->getPlayerChoice();
		newGame->makeChoice(playerChoice);
	}

	Situation* lastMoment = newGame->getCurrentSituation();
	this->interface->showSituation(lastMoment);
	this->interface->gameEndMessage();
}

Character* GameFactory::createCharacter()
{
	std::string characterName = interface->getCharacterName();
	Gender characterGender = interface->getGender();
	Race characterRace = interface->getRace();
	
	if (characterRace == Race::Wizard)
	{
		HogwartsHouse characterHouse = interface->getHouse();
		return new Wizard(characterName, characterGender, characterHouse);
	}

	else if (characterRace == Race::Hobbit)
		return new Hobbit(characterName, characterGender);
	
	else if (characterRace == Race::Arcanist)
	{
		ArcanistArt art = interface->getArcanistArt();
		return new Arcanist(characterName, characterGender, art);
	}
}


bool GameFactory::playerWantsNewGame()
{
	return this->interface->playerWantsNewGame();
}