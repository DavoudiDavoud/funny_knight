#ifndef ADCREADER
#define ADCREADER

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
