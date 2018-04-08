#include "Idea.h"
#include <sstream>
#include <vector>


Idea::Idea(std::string _descr, std::string _status, std::string _creator, int _act)
{
	description = _descr;
	status = _status;
	creator = _creator;
	act = _act;
}

std::istream& operator >> (std::istream& is, Idea& i)
{
	std::string line;
	std::getline(is, line);
	if (line == "")
		return is;

	std::stringstream ss(line);
	std::vector<std::string> words;
	std::string word;

	while (std::getline(ss, word, ','))
		words.push_back(word);

	i.description = words[0];
	i.status = words[1];
	i.creator = words[2];
	i.act = std::stoi(words[3]);

	return is;
}


std::ostream& operator << (std::ostream& os, Idea& i)
{
	os << i.getDescription() << ',' << i.getStatus() << ',' << i.getCreator() << ',' << std::to_string(i.getAct()) << '\n';
	return os;
}

Idea::~Idea()
{
}
