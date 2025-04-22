#pragma once
#include <vector>

class ADirector;

class UMovie
{
public:
	UMovie();
	virtual ~UMovie();

	std::vector<ADirector*> RelateDirector()
	{
		return Directors;
	}

	void Play();
	void RelateDirector(ADirector* RelateDirector);

protected:
	std::vector<ADirector*> Directors;
};

