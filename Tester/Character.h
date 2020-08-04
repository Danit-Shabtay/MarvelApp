#pragma once
using namespace std;


class Character {
	char* name;
	char* imgName;
	int year;
	char* wikiLink;

public:
	Character(const char* name, const char* imgName, const int year, const char* wikiLink);
	void setName(const char* name);
	void setImgName(const char* imgName);
	void setYear(const int year);
	void setWikiLink(const char* wikiLink);
	char* getName() const; 
	char* getImgName() const;
	int getYear() const;
	char* getWikiLink() const;
	void print();

	//~Character();
};