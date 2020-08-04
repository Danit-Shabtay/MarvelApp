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
    Character deadpool("Deadpool", "no", 2020, "https://en.wikipedia.org/wiki/Deadpool");
    Character venom("Venom", "no", 2020, "https://en.wikipedia.org/wiki/Venom_(Marvel_Comics_character)");
    deadpool.print();
    venom.print();
    
    CharacterList data;
    data.AddCharacter(&deadpool);
    data.AddCharacter(&venom);
    data.PrintAllChars();
    data.RemoveCharacter(&venom);
    data.PrintAllChars();
    

    // Print few characters:
    //cout << "The Character is : " <<  << endl;

    getchar();
    return 0;
}


/* Open the browser with the URL */
void testOpenURL() {
    system("start http://google.com");
}