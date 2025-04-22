#pragma once
#include "Director.h"

class AFilmDirector : public ADirector
{
public:
	AFilmDirector();
	virtual ~AFilmDirector();

	virtual void MakeMovie() override;
};

