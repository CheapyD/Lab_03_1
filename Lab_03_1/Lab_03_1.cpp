// Lab_03_1.cpp
// < ������� ������ >
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ������ �����.
// ������ 6
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B = 0; // �������� ��������� - ������������� ����� ������� ������

	cout << "x = "; cin >> x;
	A = 5 * exp(3 * x);
	// ����� 1: ������������ � ���������� ����

	if (x <= -1)
		B = 3 + sin(fabs(x));
	if (1 < x && x <= 3)
		B = 2 * exp(x / 4 - 1);
	if (x > 3)
		B = 7 - (sqrt(2) * (x * x * x));
	
	y = A - B;

	cout << endl;
	cout << "1) y = " << y << endl;

	// ����� 2: ������������ � ������ ����

	if (x <= -1)
		B = 3 + sin(fabs(x));
	else
		if (1 < x && x <= 3)
			B = 2 * exp(x / 4 - 1);
		else
			B = 7 - (sqrt(2) * (x * x * x));

	y = A - B;

	cout << "2) y = " << y << endl;

	cin.get();
	system("pause");
	return 0;
}