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
	// добавил 2 функции перевода в из строки в десятичное число и наоборот в строку (типа в двоичном виде)
	int String_To_Int(std::string myString) { // строку которая представляет из себя двочиное число переведет в int
		myString.erase(0, myString.find('1'));
		if (myString.length() == 0) {
			myString.push_back('0');
		}
		int sum = 0;
		int degree = 1;
		for (int i = myString.length() - 1; i >= 0; i--) {
			if (myString[i] == '1') {
				sum += degree;
			}
			degree *= 2;
		}
		return sum;
	}
	std::string Int_to_String(int x) { //int переведет в строку но без незначащих нулей слева, можно добавить
		std::string buff = "";
		if (x == 0) {
			buff += '0';
		}
		while (x > 0) {
			if (x % 2 == 0) {
				buff += '0';
			}
			else {
				buff += '1';
			}
			x /= 2;
		}
		std::string result = "";
		for (int i = 0; i < buff.size(); i++) {
			result.push_back(buff[buff.size() - 1 - i]);
		}
		return result;
	}

	std::vector<int> Modeling() {
		std::vector<int> result;// для хранения результата прохода
		result.push_back(0); // начинаем с нулевого
		int current = 0;
		while(microCommands[current].A1 != -1 ) {// сравниваю с -1 потому что int со строкой не сравнить
			bool now = valuesOfXi[microCommands[current].x]; // получаем значение текущего x
			if (microCommands[current].i == now) { // если он равен i то идем в next команду
				current++;
			}
			else { // иначе переходим по команде
				current = microCommands[current].A1;
			}
			result.push_back(current);
			if (current >= microCommands.size()) {
				// что то делать с тем что мы вылезли за пределы массива значит ошибка в таблице
			}
		}
		return result;
	} //метод, возвращающий список микрокоманд
};