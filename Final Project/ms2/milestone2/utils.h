#ifndef SDDS_UTILS_H
#define SDDS_UTILS_H
#include <stdio.h>
void line(char fill, int length);
void flushKey();
void fflushKey(FILE* fptr);
int getInt(void);
int getMMInt(int min, int max, const char valueName[]);
double getDouble(void);
double getDoubleMM(double min, double max);


#endif // !SDDS_UTILS1_H
