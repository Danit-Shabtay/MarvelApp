#include "CharacterList.h"
using namespace std;

// The list containing all the Marvel characters 
CharacterList::CharacterList() : currentCharacter(0) {}

// Add a new character to the list
bool CharacterList::AddCharacter(Character *c){
	if (c != NULL) {
		listOfCharacters.push_back(c);
		return true;
	}
	return false;
}

// Removes a character from the list
Character* CharacterList::RemoveCharacter(Character *c){
	if (c != NULL) {
		listOfCharacters.remove(c);
		return c;
	}
	return NULL;
}

Character CharacterList::GetNextChar(){
	if (currentCharacter + 1 == listOfCharacters.size()) {
		currentCharacter = 0;
	}
	else
		currentCharacter++;
		
	return listOfCharacters.;
}

Character CharacterList::GetPreviusChar()
{
	return Character();
}

// Print all the characters in the list
void CharacterList::PrintAllChars(){
	for (auto it = listOfCharacters.begin(); it != listOfCharacters.end(); it++) {
		(*it)->print();
	}
}

