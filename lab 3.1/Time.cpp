#include "Time.h"
#include <iostream>
#include <sstream>
using namespace std;

bool Time::secondCheck(int s)
{
	if (s < 0 || s >= 60)
	{
		cout << "Wrong arguments to Init! = " << endl;
		return false;
	}
	else
		return true;
}

bool Time::minuteCheck(int s)
{
	if (s < 0 || s >= 60)
	{
		cout << "Wrong arguments to Init! = " << endl;
		return false;
	}
	else
		return true;
}

void Time::IncreaseSecond(int second)
{
	int a1;
	if (second + getC() >= 60)
	{
		augmentationB();
		if (getB() >= 60)
		{
			augmentationA();
			setB(0);
		}
		a1 = second + getC() - 60;
	}
	else
	{
		a1 = second + getC();
	}
	setC(0);
	for (int i = 0; i < a1; i++)
	{
		augmentationC();
	}
}

void Time::IncreaseMinute(int minute)
{
	int a1;
	if (minute + getB() >= 60)
	{
		augmentationA();
		if (getA() >= 24)
		{
			cout << "Error, 24hour = one day" << endl;
			setA(0);
		}
		a1 = minute + getB() - 60;
		setB(a1);
	}
	else
	{
		a1 = minute + getB();
	}
	setB(0);
	for (int i = 0; i < a1; i++)
	{
		augmentationB();
	}
}

Time::Time()
{
	Triad(0, 0, 0);
}

Time::Time(int a, int b, int c)
{
	Triad(a, b, c);
}

Time::operator string () const
{
	stringstream ss;
	return ss.str();
}