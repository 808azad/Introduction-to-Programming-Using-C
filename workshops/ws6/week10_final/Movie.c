#define _CRT_SECURE_NO_WARNINGS
#include "Movie.h"

int loadMovie(struct Movie* mptr, FILE* fptr)
{
	int done = 0;
	if (fscanf(fptr, "%[^\t]\t%d\t%[^\t]\t%d\t%[^\t]\t%f\n",
		mptr->title, &mptr->year, mptr->rating, &mptr->duration, mptr->genre, &mptr->consRating) == 6)
	{
		done = 1;
	}
	return done;
}

void list(const struct Movie* mptr, int row)
{
	struct Time t;
	t.hours = mptr->duration / 60;
	t.minutes = mptr->duration % 60;

	printf(" %3d | %-20.20s|%5d |%5s |%2d:%02d | %-25.25s|%5.1f |\n", row, mptr->title,
		mptr->year, mptr->rating, t.hours, t.minutes, mptr->genre, mptr->consRating);
}
void display(const struct Movie* m)
{
	struct Time r;
	r.hours = m->duration / 60;
	r.minutes = m->duration % 60;

	printf("Title: %s\n", m->title);
	printf("Year: %d\n", m->year);
	printf("Rating: %s\n", m->rating);
	printf("Duration:%2d:%02d\n", r.hours, r.minutes);
	printf("Genres: %s\n", m->genre);
	printf("Consumer Rating: %.1f\n", m->consRating);
}
const char* getMovieTitle(const struct Movie* mptr)
{
	return mptr->title;
}