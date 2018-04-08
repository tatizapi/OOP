#include "screenwriting.h"

Screenwriting::Screenwriting(Repository& r, QWidget *parent)
	: repo{ r }, QMainWindow(parent)
{
	ui.setupUi(this);

	this->repo.addObserver(this);

	ui.acceptBtn->setEnabled(false);

	this->populateList();
	
	QObject::connect(ui.addBtn, SIGNAL(clicked()), this, SLOT(addIdea()));
	QObject::connect(ui.acceptBtn, SIGNAL(clicked()), this, SLOT(updateProposed()));
	QObject::connect(ui.listWidget, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(checkProposed())); //normal signalul ar fi itemSelectionChanged but Qt weird as usual

}

void Screenwriting::populateList()
{
	if (ui.listWidget->count() > 0)
		ui.listWidget->clear();

	for (auto i : this->repo.getIdeas())
	{
		QString stringItem = QString::fromStdString("Description: " + i.getDescription() + "; Status: " + i.getStatus() + "; Creator: " + i.getCreator() + "; Act: " + std::to_string(i.getAct()));
		QListWidgetItem *item = new QListWidgetItem(stringItem);
		if (i.getStatus() == "accepted" && this->windowTitle().toStdString() == i.getCreator())
			item->setBackgroundColor(Qt::green);

		ui.listWidget->addItem(item);
	}

}

void Screenwriting::addIdea()
{
	std::string description = ui.descriptionLE->text().toStdString();
	int act = ui.actLE->text().toInt();
	std::string creator = this->windowTitle().toStdString(); //this e fereastra principala

	this->repo.addIdea(description, creator, act);
}

void Screenwriting::checkProposed()
{
	QModelIndexList index = ui.listWidget->selectionModel()->selectedIndexes();
	int idx = index.at(0).row();

	Idea currentIdea = this->repo.getIdeas()[idx];
	if (currentIdea.getStatus() == "proposed")
		ui.acceptBtn->setEnabled(true);
	else
		ui.acceptBtn->setEnabled(false);
}

void Screenwriting::updateProposed()
{
	QModelIndexList index = ui.listWidget->selectionModel()->selectedIndexes();
	int idx = index.at(0).row();

	this->repo.updateIdea(idx);

	this->repo.notify();
}

void Screenwriting::update()
{
	this->populateList();
}

Screenwriting::~Screenwriting()
{

}
