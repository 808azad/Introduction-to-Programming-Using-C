#ifndef SDDS_MOVIE_H
#define SDDS_MOVIE_H
#include <stdio.h>

struct Movie
{
	char title[61];
	int year;
	char rating[4];
	int duration;
	char genre[61];
	float consRating;
};
int loadMovie(struct Movie* mptr, FILE* fptr);
void list(const struct Movie* mptr, int row);
#endif // !SDDS_MOVIE_H