#pragma warning(disable:4996)
#include "Character.h"
#include <iostream>
using namespace std;


Character::Character(const char* name, const char* imgName, const int year, const char* wikiLink){
	setName(name); 
	setImgName(imgName);
	setYear(year);
	setWikiLink(wikiLink);
}

void Character::setName(const char* name){
	if (this->name != NULL) {
		delete this->name;
	}
	int len = strlen(name) + 1;
	this->name = new char[len];
	strcpy(this->name, name);
}

void Character::setImgName(const char* imgName){
	if (this->imgName != NULL) {
		delete this->imgName;
	}
	int len = strlen(imgName) + 1;
	this->imgName = new char[len];
	strcpy(this->imgName, imgName);
}

void Character::setYear(const int year){
	this->year = year;
}

void Character::setWikiLink(const char* wikiLink){
	if (this->wikiLink != NULL) {
		delete this->wikiLink;
	}
	int len = strlen(wikiLink) + 1;
	this->wikiLink = new char[len];
	strcpy(this->wikiLink, wikiLink);
}

char* Character::getName() const{
	return name;
}

char* Character::getImgName() const{
	return imgName;
}

int Character::getYear() const{
	return year;
}

char* Character::getWikiLink() const{
	return wikiLink;
}

void Character::print(){
	cout << "Name: " << getName() << " | Year: " << getYear() << endl;
}

//Character::~Character(){
//	if (name != NULL) {
//		delete[] name;
//	}
//}

//ostream& operator<<(ostream& out, const Character &c) {
//	out << "Name: " << c.getName() << " | Year: " << c.getYear();
//	return out;
//}
