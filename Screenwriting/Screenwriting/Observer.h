#pragma once
#include <vector>

class Observer
{
public:
	virtual ~Observer() {};

	virtual void update() = 0;
};


class Subject
{
private:
	std::vector<Observer*> observers;

public:
	virtual ~Subject() {}
	
	void addObserver(Observer *ob)
	{
		observers.push_back(ob);
	}

	void notify()
	{
		for (auto ob : observers)
			ob->update();
	}
};

