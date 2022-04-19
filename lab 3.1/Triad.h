#pragma once
#include <string>
using namespace std;

class Triad
{
private:
	int a;
	int b;
	int c;
public:
	int getA() const { return a; }
	int getB() const { return b; }
	int getC() const { return c; }
	void setA(int a) { this->a = a; }
	void setB(int b) { this->b = b; }
	void setC(int c) { this->c = c; }

	Triad(); // ����������� �� ����������
	Triad(int, int, int); // ����������� �����������
	void augmentationA();
	void augmentationB();
	void augmentationC();

	friend istream& operator >> (istream&, Triad&); //�������� � ���������
	friend ostream& operator << (ostream&, const Triad&); //���� �� �����
	operator string() const; //���������� ���� � ������������ � ������� �����
};