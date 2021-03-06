#include "Interface.h"

void Interface::displayText(std::string text)
{
	std::cout << text << std::endl;
}

void Interface::gameStartMessage(Character* hero)
{
	this->displayText("\nThe Adventures of " + hero->getNickname() + "\n");
}

void Interface::gameEndMessage()
{
	this->displayText("\n ~~~~~~~$ The End $~~~~~~ \n");
}

bool Interface::playerWantsNewGame()
{
	this->askNewGame();
	return this->getYesOrNo();
}

bool Interface::getYesOrNo()
{
	bool answer;
	char k = getch();
	switch (k)
	{
	case 'Y':
		answer = true;
		break;
	case 'y':
		answer = true;
		break;
	default:
		answer = false;
		break;
	}
	return answer;
}

void Interface::askNewGame()
{
	this->displayText("Start New Game? [Y/n] > ");
}

void Interface::showSituation(Situation* currentSituation)
{
	this->displayText(currentSituation->toString());
}


std::string Interface::getCharacterName()
{
	std::string name;
	displayText("Character Name> ");
	std::getline(std::cin, name);
	return name;
}

Gender Interface::getGender()
{
	Gender gender;
	displayText("Gender: ");
	displayText("1. Male");
	displayText("2. Female");
	displayText("Character Gender> ");
	char k = getch();
	switch(k)
	{
	case '1':
		gender = Gender::Male;
		break;
	case '2':
		gender = Gender::Female;
		break;
	default:
		gender = Gender::Male;
		break;
	}
	return gender;
}

Race Interface::getRace()
{
	Race race;
	displayText("Races:");
	displayText("1. Wizard ('Harry Potter')");
	displayText("2. Hobbit ('Lord of the Rings')");
	displayText("3. Arcanist ('Kingkiller Chronicles')");
	displayText("\nCharacter Race> ");
	
	char k = getch();
	switch(k)
	{
	case '1':
		race = Race::Wizard;
		break;
	case '2':
		race = Race::Hobbit;
		break;
	case '3':
		race = Race::Arcanist;
		break;
	default:
		race = Race::Wizard;
		break;
	}
	return race;
}

HogwartsHouse Interface::getHouse()
{
	HogwartsHouse house;

	displayText("Hogwarts Houses:");
	displayText("1. Gryffindor... where dwell the brave at heart. Their daring, nerve, and chivalry set Gryffindors apart");
	displayText("2. Slytherin... those cunning folks use any means to achieve their ends.");
	displayText("3. Ravenclaw... if you've a ready mind. There those of wit and learning, will always find their kind.");
	displayText("4. Hufflepuff... where they are just and loyal. Those patient Hufflepuffs are true and unafraid of toil.");
	displayText("Pick Hogwarts House> ");

	char k = getch();
	switch(k)
	{
	case '1':
		house = HogwartsHouse::Gryffindor;
		break;
	case '2':
		house = HogwartsHouse::Slytherin;
		break;
	case '3':
		house = HogwartsHouse::Ravenclaw;
		break;
	case '4':
		house = HogwartsHouse::Hufflepuff;
		break;
	default:
		house = HogwartsHouse::Gryffindor;
	}
	return house;
}


ArcanistArt Interface::getArcanistArt()
{
		ArcanistArt art;

		displayText("the University stands out due to its instruction in the following disciplines:");
		displayText("1. Sympathy - requires a user to create a sympathetic link between two objects. What is done to one object will affect the other.");
		displayText("2. Artificery - involves standard engineering and the application of runes (known as sygaldry ). These can mimic the effects of sympathy to create items with special properties.");
		displayText("3. Alchemy - Chemistry is nothing like Alchemy!");
		displayText("4. Naming - by perceiving the thing's true nature the Namer can control it.");
		displayText("Choose an Arcanist Art In Which Your Character Specializes > ");

		char k = getch();
		switch(k)
		{
		case '1':
			art = ArcanistArt::Sympathy;
			break;
		case '2':
			art = ArcanistArt::Artificery;
			break;
		case '3':
			art = ArcanistArt::Alchemy;
			break;
		case '4':
			art = ArcanistArt::Naming;
			break;
		default:
			art = ArcanistArt::Sympathy;
		}
		return art;
}

int Interface::getPlayerChoice()
{
	int choice;
	char k = getch();
	switch(k)
	{
	case '1':
		choice = 1;
		break;
	case '2':
		choice = 2;
		break;
	case '3':
		choice = 3;
		break;
	case '4':
		choice = 4;
		break;
	default:
		choice = 1;
	}
	return choice;
}