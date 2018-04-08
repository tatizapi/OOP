#pragma once
#include <vector>
#include "Idea.h"
#include "Screenwriter.h"
#include "Observer.h"

class Repository : public Subject
{
private:
	std::string screenwriter_fn;
	std::string idea_fn;

	std::vector<Screenwriter> screenwriters;
	std::vector<Idea> ideas;

public:
	Repository(std::string s_fn, std::string i_fn);
	~Repository() {}

	std::vector<Screenwriter>& getScreenwriters() { return this->screenwriters; };
	std::vector<Idea>& getIdeas() { return this->ideas; };

	void readFromFile();
	void writeToFile();

	void addIdea(std::string descr, std::string creator, int act);
	void updateIdea(int idx);
};