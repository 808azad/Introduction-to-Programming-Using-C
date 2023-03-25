#define _CRT_SECURE_NO_WARNINGS
#include "Movie.h"

int loadMovie(struct Movie* mptr, FILE* fptr)
{
	int done = 0;
	if (fscanf(fptr, "%[^\t]\t%d\t%[^\t]\t%d\t%[^\t]\t%f\n",
		mptr->title, mptr->year, mptr->rating, mptr->duration, mptr->genre, mptr->consRating) == 6)
	{
		done = 1;
	}
	return done;
}

void list(const struct Movie* mptr, int row)
{
	printf("|%2d | %-20.20s|%5d |%5s |%5s | %-25.25s|%5.1f |", row, mptr->title,
		mptr->year, mptr->rating, mptr->duration, mptr->genre, mptr->consRating);
}
void display(const struct Movie* m)
{
	printf("Title: %s\n", m->title);
	printf("Year: %d\n", m->year);
	printf("Rating: %s\n", m->rating);
	printf("Duration: %s\n", m->duration);
	printf("Genres: %s\n", m->genre);
	printf("Consumer Rating: %f", m->consRating);
}
const char* getMovieTitle(const struct Movie* mptr)
{
	return mptr->title;
}