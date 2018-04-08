#pragma once
#include <string>
#include <iostream>

class Idea
{
private:
	std::string description;
	std::string status;
	std::string creator;
	int act;
public:
	Idea(std::string _descr = "", std::string _status = "", std::string _creator = "", int _act = 0);
	~Idea();

	std::string getDescription() { return this->description; };
	std::string getStatus() { return this->status; };
	std::string getCreator() { return this->creator; };
	void setStatus(std::string _status) { this->status = _status; };
	int getAct() { return this->act; };

	friend std::istream& operator >> (std::istream& is, Idea& i);
	friend std::ostream& operator << (std::ostream& os, Idea& i);
};

