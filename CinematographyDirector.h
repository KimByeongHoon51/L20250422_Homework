#pragma once
#include "Director.h"

class ACinematographyDirector : public ADirector
{
public:
	ACinematographyDirector();
	virtual ~ACinematographyDirector();

	virtual void MakeMovie() override;
};
