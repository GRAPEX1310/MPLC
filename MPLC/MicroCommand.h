#pragma once
#include <string>
#include <vector>
#include "MicroOperation.h"

class MicroCommand
{
public:
	int number; //номер
	std::string code; //код
	std::vector<MicroOperation> microOperations; //список микроопераций
	std::string x; //код х
	bool i;
	int A1; //адрес перехода

	MicroCommand() {}

	MicroCommand(int number, std::string code, std::vector<MicroOperation>& microOperations, std::string x, bool i, int A1)
	{
		this->number = number;
		this->code = code;
		this->microOperations = microOperations;
		this->x = x;
		this->i = i;
		this->A1 = A1;
	}
};