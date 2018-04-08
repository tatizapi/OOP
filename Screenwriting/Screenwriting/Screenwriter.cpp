#include "Screenwriter.h"
#include <sstream>
#include <vector>
#include <string>


Screenwriter::Screenwriter(std::string _name, std::string _expertise)
{
	expertise = _expertise;
	name = _name;
}

std::istream& operator >> (std::istream& is, Screenwriter& s)
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

	s.name = words[0];
	s.expertise = words[1];

	return is;
}

Screenwriter::~Screenwriter()
{
}
