#ifndef CLOCK_H_
#define CLOCK_H_

typedef unsigned char BYTE;
#define PM 0
#define AM 1

void clock_write(BYTE hr, BYTE min , BYTE sec);
void date_write(BYTE day , BYTE month , unsigned int year);


#endif /* CLOCK_H_ */