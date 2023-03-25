#ifndef SDDS_MOVIE_H
#define SDDS_MOVIE_H
#include <stdio.h>

struct Movie
{
	char title[61];
	int year;
	char rating[4];
	char duration[5];
	char genre[61];
	float consRating;
};
int loadMovie(struct Movie* mptr, FILE* fptr);
void list(const struct Movie* mptr, int row);
void display(const struct Movie* m);
const char* getMovieTitle(const struct Movie* mptr);
#endif // !SDDS_MOVIE_H
