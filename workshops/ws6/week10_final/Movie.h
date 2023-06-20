#ifndef SDDS_MOVIE_H
#define SDDS_MOVIE_H

#include <stdio.h>

// Declaration of the Movie struct that represents movie information
struct Movie{
	char title[61];
	int year;
	char rating[4];
	int duration;
	char genre[61];
	float consRating;
};
// Declaration of the Time struct that represents time in hours and minutes
struct Time{
	int hours;
	int minutes;
};
// Function declarations
int loadMovie(struct Movie* mptr, FILE* fptr);
void list(const struct Movie* mptr, int row);
void display(const struct Movie* m);
const char* getMovieTitle(const struct Movie* mptr);

#endif // !SDDS_MOVIE_H
