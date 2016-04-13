#include <window.h>

#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	// create the window
	Window window;
	window.showMaximized();

	

	// execute the application
	return app.exec();
}
