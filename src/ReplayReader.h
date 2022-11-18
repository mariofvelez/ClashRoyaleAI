#pragma once

#include "Replay.h"

class ReplayReader
{
public:
	ReplayReader();
	~ReplayReader();

	Replay* loadReplay(const char* filename);
};