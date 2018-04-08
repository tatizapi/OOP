#pragma once
#include <string>
#include <iostream>

class Screenwriter
{
private:
	std::string name;
	std::string expertise;
public:
	Screenwriter(std::string _name = "", std::string _expertise = "");
	~Screenwriter();

	std::string getName() { return this->name; };
	std::string getExpertise() { return this->expertise; };

	friend std::istream& operator>>(std::istream& is, Screenwriter& s);

};

