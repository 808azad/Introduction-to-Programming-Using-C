#define _CRT_SECURE_NO_WARNINGS
#include "movie.h"

int loadMovie(struct Movie* mptr, FILE* fptr)
{
	int done = 0;
	if (fscanf(fptr,"%[^\t]\t%d\t%[^\t]\t%d\t%[^\t]\t%f\n",
		mptr->title, mptr->year, mptr->rating, mptr->duration, mptr->genre, mptr->consRating) == 6)
	{
		done = 1;
	}
	return done;
}

void list(const struct Movie* mptr, int row)
{

}