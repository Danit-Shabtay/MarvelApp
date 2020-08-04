#pragma once
#include <list>
#include "Character.h"
using namespace std;


class CharacterList {
	list <Character*> listOfCharacters;
	int currentCharacter;

public:
	CharacterList();
	bool AddCharacter(Character *c);
	Character* RemoveCharacter(Character *c);
	Character GetNextChar();
	Character GetPreviusChar();
	void PrintAllChars();





	//~CharacterList();
};

