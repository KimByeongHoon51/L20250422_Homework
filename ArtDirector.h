#pragma once
#include "Director.h"

class AArtDirector : public ADirector
{
public:
	AArtDirector();
	virtual ~AArtDirector();

	virtual void MakeMovie() override;
};

