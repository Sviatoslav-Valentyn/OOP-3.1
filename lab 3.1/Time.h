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

	Time(); // ����������� �� ����������
	Time(int, int, int); // ����������� �����������

	operator string() const; //���������� ���� � ������������ � ������� �����
};

