#define _CRT_SECURE_NO_WARNINGS
#include "Movie.h"

// Function to load movie information from a file into a Movie struct
// Returns 1 if loading is successful, 0 otherwise
int loadMovie(struct Movie* mptr, FILE* fptr){
	int done = 0;
	// Read movie information from the file and assign it to the corresponding struct members
	if (fscanf(fptr, "%[^\t]\t%d\t%[^\t]\t%d\t%[^\t]\t%f\n",
		mptr->title, &mptr->year, mptr->rating, &mptr->duration, mptr->genre, &mptr->consRating) == 6){
		done = 1; // Loading successful
	}
	return done;
}

// Function to display the movie information in a formatted list view
void list(const struct Movie* mptr, int row){
	struct Time t;
	t.hours = mptr->duration / 60;
	t.minutes = mptr->duration % 60;
	// Print the movie information in a formatted table row
	printf("| %3d | %-20.20s |%5d |%5s |%2d:%02d | %-25.25s  |%5.1f |\n", row, mptr->title,
		mptr->year, mptr->rating, t.hours, t.minutes, mptr->genre, mptr->consRating);
}

// Function to display detailed information about a movie
void display(const struct Movie* m){
	struct Time r;
	r.hours = m->duration / 60;
	r.minutes = m->duration % 60;
	// Print detailed movie information
	printf("Title: %s\n", m->title);
	printf("Year: %d\n", m->year);
	printf("Rating: %s\n", m->rating);
	printf("Duration: %2d:%02d\n", r.hours, r.minutes);
	printf("Genres: %s\n", m->genre);
	printf("Consumer Rating: %.1f\n", m->consRating);
}

// Function to retrieve the title of a movie
const char* getMovieTitle(const struct Movie* mptr){
	return mptr->title;
}
