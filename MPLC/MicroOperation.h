#pragma once
#include <string>

class MicroOperation
{
public:
	std::string code;
	std::string yi;
	int setYi;

	MicroOperation(std::string code, std::string yi, int setYi)
	{
		this->code = code;
		this->setYi = setYi;
		this->yi = yi;
	}

	MicroOperation() {}
};