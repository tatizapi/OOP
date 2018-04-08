#ifndef SCREENWRITING_H
#define SCREENWRITING_H

#include <QtWidgets/QMainWindow>
#include "ui_screenwriting.h"
#include "Repository.h"
#include "Observer.h"

class Screenwriting : public QMainWindow, public Observer
{
	Q_OBJECT

public:
	Screenwriting(Repository& r, QWidget *parent = 0);
	~Screenwriting();

private:
	Repository &repo;
	Ui::ScreenwritingClass ui;
	
	void populateList();
	void update();

public slots:
	void addIdea();
	void checkProposed();
	void updateProposed();
};

#endif // SCREENWRITING_H
