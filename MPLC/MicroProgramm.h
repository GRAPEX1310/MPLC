#pragma once
#include <string>
#include <vector>
#include <map>
#include "MicroOperation.h"
#include "MicroCommand.h"

class MicroProgramm
{
public:
	int numberOfCommands; //количество команд ai
	int numberOfSetsYi; //количество множеств микроопераций Yi
	std::map<std::string, std::string> logicalConditions; //код - сам x
	std::vector<MicroOperation> microOperations; //вся информация о микрооперации: код, значение и номер множества
	std::vector<MicroCommand> microCommands; //список всех микрокоманд ai: номер, код, микрооперации, х, i, адрес перехода
	std::map<std::string, bool> valuesOfXi; //x - его значение
	MicroProgramm() {}

	MicroProgramm(int numberOfCommands, int numberOfSetsYi, std::map<std::string, std::string> logicalConditions, std::vector<MicroOperation> microOperations,
		std::vector<MicroCommand> microCommands, std::map<std::string, bool>valuesOfXi)
	{
		this->numberOfCommands = numberOfCommands;
		this->numberOfSetsYi = numberOfSetsYi;
		this->logicalConditions = logicalConditions;
		this->microOperations = microOperations;
		this->microCommands = microCommands;
		this->valuesOfXi = valuesOfXi;
	}

	std::vector<int> Modeling(); //метод, возвращающий список микрокоманд
};