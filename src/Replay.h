#pragma once

#include <vector>
#include "BattleActions.h"

class Replay
{
public:
	Replay()
	{
		blue_actions.reserve(100);
		red_actions.reserve(100);
	}
	~Replay()
	{

	}
private:
	std::vector<BattleAction> blue_actions;
	std::vector<BattleAction> red_actions;

};