#include <iostream>
#include <vector>
#include "Movie.h"
#include "Director.h"
#include "FilmDirector.h"
#include "CinematographyDirector.h"
#include "ArtDirector.h"

int main()
{
	UMovie* OneMoive = new UMovie();

	OneMoive->RelateDirector(new AFilmDirector());
	OneMoive->RelateDirector(new AACinematographyDirector());
	OneMoive->RelateDirector(new AArtDirector());
	OneMoive->Play();

	delete OneMoive;
	OneMoive = nullptr;

	return 0;
}
