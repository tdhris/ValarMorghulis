#include "Situation.h"
#include "Choice.h"
#include <string>

Situation::Situation(Character* hero, std::string description)
{
	this->hero = hero;
	this->description = description;
}

Situation::Situation(Character* hero, std::string description, std::vector<Choice*> possibleChoices)
{
	this->hero = hero;
	this->description = description;
	this->possibleChoices = possibleChoices;
}

Choice* Situation::getChoice(int choiceIndex) const
{
	return this->possibleChoices[choiceIndex];
}

Situation* Situation::getChoiceConsequence(int choiceIndex) const
{
	return this->getChoice(choiceIndex)->getConsequence();
}

std::string Situation::getChoiceDescription(int choiceIndex) const
{
	return this->getChoice(choiceIndex)->getDesription(); 
}

void Situation::addChoice(std::string description, Situation* consequence)
{
	this->possibleChoices.push_back(new Choice(description, consequence));
}

std::string Situation::toString() const
{
	std::string situation;
	situation.append(this->getDescription());
	if (!this->deadEndSituation())
	{
		situation.append(this->getQuestion());
		situation.append(this->getChoicesString());
	}
	return situation;
}

std::string Situation::getDescription() const
{
	return this->description;
}

std::string Situation::getQuestion() const
{
	std::string question = "\nWhat will ";
	question.append(this->hero->getNickname());
	question.append(" do?\n");
	return question;
}

std::string Situation::getChoicesString() const
{
	std::string possibleChoices,
				currentChoice;

	for (int i = 0; i < this->possibleChoices.size(); i++)
	{
		possibleChoices.append(std::to_string(i + 1));
		possibleChoices.append(". ");
		currentChoice = this->getChoiceDescription(i);
		possibleChoices.append(currentChoice);
		possibleChoices.append("\n");
	}
	return possibleChoices;
}

bool Situation::deadEndSituation() const
{
	return this->possibleChoices.size() == 0;
}

