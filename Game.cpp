#include <fstream>
#include <vector>
#include "Game.h"
#include "Choice.h"
#include "Wizard.h"
#include "Storyline.h"
#include "WizardStoryline.h"
#include "HobbitStoryline.h"


Game::Game(Character* hero)
{
	this->hero = hero;
	this->currentSituation = this->initialize();
}

Character* Game::getCharacter() const
{
	return this->hero;
}

bool Game::isRunning() const
{
	if (this->currentSituation == NULL)
		return false;

	return !(this->currentSituation->deadEndSituation());
}

Situation* Game::getCurrentSituation() const
{
	return this->currentSituation;
}

void Game::setCurrentSituation(Situation* newSituation)
{
	this->currentSituation = newSituation;
}

void Game::makeChoice(int choiceIndex)
{
	choiceIndex --;
	Situation* choice =  this->currentSituation->getChoiceConsequence(choiceIndex);
	this->setCurrentSituation(choice);
}

Situation* Game::initialize()
{
	Storyline* storyline;
	if (this->hero->getRace() == Race::Wizard)
	{
		storyline = new WizardStoryline(this->hero);
	}

	else if (this->hero->getRace() == Race::Hobbit)
	{
		storyline = new HobbitStoryline(this->hero);
	}

	return storyline->getStoryline();
}