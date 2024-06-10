#include "MicroProgramm.h"

std::vector<int> MicroProgramm::Modeling(int numberOfTacts)
{
	std::vector<int> res;

	int cur = 0;
	int curTact = 0;
	res.push_back(0);
	while (cur < this->numberOfCommands && curTact < numberOfTacts)
	{
		if (microCommands.at(cur).i == 0 && microCommands.at(cur).x == 0)
			break;
		if (microCommands.at(cur).i != this->valuesOfXi.at(curTact).at(microCommands.at(cur).x).second)
			cur = microCommands.at(cur).A1;
		else
			cur++;
		if(cur < this->numberOfCommands)
			res.push_back(cur);
		curTact++;
	}
	return res;
}
