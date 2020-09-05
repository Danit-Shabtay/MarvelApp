#include "CharacterList.h"
using namespace std;

// c-tor
CharacterList::CharacterList() {
	current = listOfCharacters.begin();
}

// Add a new character to the list
bool CharacterList::AddCharacter(Character *c){

	if (c == NULL)
		return false;

	listOfCharacters.push_back(c);

	// Check if it's the first item in the list
	// and initialize the iterator:
	if (listOfCharacters.size() == 1) {
		current = listOfCharacters.begin();
	}
		
	return true;
}

// Removes a character from the list
Character* CharacterList::RemoveCharacter(Character *c){
	if (c != NULL) {
		for (auto it = listOfCharacters.begin(); it != listOfCharacters.end(); it++) {
			if (*it == c) {
				listOfCharacters.remove(c);

				// Check if pointed by the iterator:
				if (*current == c) {
					if (current != listOfCharacters.end()) {
						current++;
					}
					else {
						current = listOfCharacters.begin();
					}
				}
				return c;
			}
		}
	}
	return NULL;
}

Character* CharacterList::GetNextChar(){
	Character* temp = (*current);

	// Check if we out of bound:
	list<Character*>::iterator  end = listOfCharacters.end();
	list<Character*>::iterator  begin = listOfCharacters.begin();

	list<Character*>::iterator  next = current;
	next++;

	if (next != end) {
		current++;
	}
	else {
		current = begin;
	}
	return temp;
}



Character* CharacterList::GetPreviusChar()
{
	return NULL;
}

// Print all the characters in the list
void CharacterList::PrintAllChars(){
	for (auto it = listOfCharacters.begin(); it != listOfCharacters.end(); it++) {
		(*it)->print();
	}
}

CharacterList::~CharacterList() {
	for (auto it = listOfCharacters.begin(); it != listOfCharacters.end(); it++) {
		delete (*it);
	}
}

