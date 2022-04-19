#pragma once
#include <string>
#include "Triad.h"

using namespace std;
class Time:public Triad
{
public:
	void IncreaseSecond(int second);
	void IncreaseMinute(int minute);
	bool secondCheck(int);
	bool minuteCheck(int);

	Time(); // конструктор за умовчанням
	Time(int, int, int); // конструктор ініціалізації

	operator string() const; //приведення типу – перетворення у літерний рядок
};

