#pragma once
#include "Director.h"

class AACinematographyDirector : public ADirector
{
public:
	AACinematographyDirector();
	virtual ~AACinematographyDirector();

	virtual void MakeMovie() override;
};
