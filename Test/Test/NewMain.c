#include <avr/io.h>
#define F_CPU 11059200
#include <util/delay.h>
#include "schedular.h"

int main(void)
{
	start();
	while (1){
		engine();
	}
}