#ifndef ADCREADER
#define ADCREADER
#include <QThread>


class ADCreader : public QThread
{
public:
	ADCreader();
	void quit();
	void run();


private:
	bool running;

};

#endif
