#include <stdio.h>
#include <string.h>
#include <fstream>
#include <iostream>
#include "Character.h"
#include "CharacterList.h"
using namespace std;

void testOpenURL();

int main(int argc, char* argv[]) {
    //testOpenURL();

    // Char1 
    // Cahr2
    //Character deadpool("Deadpool", "no", 2020, "https://en.wikipedia.org/wiki/Deadpool");
    //Character venom("Venom", "no", 2020, "https://en.wikipedia.org/wiki/Venom_(Marvel_Comics_character)");
    //deadpool.print();
    //venom.print();
    
    CharacterList data;
    //data.AddCharacter(&deadpool);
    //data.AddCharacter(&venom);
    
    data.AddCharacter(new Character("Deadpool", "no", 2020, "https://en.wikipedia.org/wiki/Deadpool"));
    data.AddCharacter(new Character("Venom", "no", 2020, "https://en.wikipedia.org/wiki/Venom_(Marvel_Comics_character)"));
    data.PrintAllChars();

    //data.RemoveCharacter(&venom);
    //data.PrintAllChars();
    
    // Test GetNextChar function:
    Character* temp = data.GetNextChar();
    cout << temp->getName() << endl;

    temp = data.GetNextChar();
    cout << temp->getName() << endl;


    getchar();
    return 0;
}


/* Open the browser with the URL */
void testOpenURL() {
    system("start http://google.com");
}