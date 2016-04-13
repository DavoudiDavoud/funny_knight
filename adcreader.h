#ifndef ADCREADER
#define ADCREADER

class ADCreader : public QThread
{
public:
	ADCreader();
	void quit();
	void run();
	int ret;
	int fd;
	int sysfs_fd;
	int no_tty;
	
	static const char *device = "/dev/spidev0.0";
	static uint8_t mode = SPI_CPHA | SPI_CPOL;;
	static uint8_t bits = 8;
	static int drdy_GPIO = 22;

private:
	bool running;

};

#endif
