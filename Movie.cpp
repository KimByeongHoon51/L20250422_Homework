#include "Movie.h"
#include "Director.h"

UMovie::UMovie()
{
}

UMovie::~UMovie()
{
}

void UMovie::Play()
{
	while (true)
	{
		for (auto Director : Directors)
		{
			Director->MakeMovie();
		}
	}
}

void UMovie::RelateDirector(ADirector* RelateDirector)
{
	Directors.push_back(RelateDirector);
}
