#include "Repository.h"
#include <fstream>

Repository::Repository(std::string s_fn, std::string i_fn)
{
	this->screenwriter_fn = s_fn;
	this->idea_fn = i_fn;

	this->readFromFile();
}

void Repository::readFromFile()
{
	std::fstream f(this->screenwriter_fn);

	Screenwriter s;
	while (f >> s)
		this->screenwriters.push_back(s);

	f.close();

	std::fstream f2(this->idea_fn);
	Idea i;
	while (f2 >> i)
		this->ideas.push_back(i);


	f2.close();
}

void Repository::writeToFile()
{
	std::fstream f(this->idea_fn);

	for (auto i : this->ideas)
		f << i;

	f.close();
}

void Repository::addIdea(std::string descr, std::string creator, int act)
{
	Idea i{ descr, "proposed", creator, act};
	this->ideas.push_back(i);

	this->writeToFile();

	this->notify();
}

void Repository::updateIdea(int idx)
{
	this->ideas[idx].setStatus("accepted");
}