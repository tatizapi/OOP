#include "screenwriting.h"
#include "Repository.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	Repository repo{ "screenwriters.txt", "ideas.txt" };

	Screenwriting *w[20];
	for (int i = 0; i < repo.getScreenwriters().size(); i++ )
	{
		w[i] = new Screenwriting{ repo };
		Screenwriter screenwr = repo.getScreenwriters()[i];
		w[i]->setWindowTitle(QString::fromStdString(screenwr.getName()));
		w[i]->show();
	}

	return a.exec();
}
