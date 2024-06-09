#include "MicroProgramm.h"

std::vector<int> MicroProgramm::Modeling(int numberOfTacts)
{
	std::vector<int> res;

	int cur = 0;
	int curTact = 0;
	res.push_back(0);
	while (cur < this->numberOfCommands && curTact < numberOfTacts && microCommands[cur].A1 != -1)
	{
		curTact++;
		if (microCommands[cur].i != this->valuesOfXi[curTact][microCommands[cur].x].second)
			cur = microCommands[cur].A1;
		else
			cur++;
		if(cur < this->numberOfCommands)
			res.push_back(cur);
	}
	return res;
}
