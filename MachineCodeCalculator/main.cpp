// MachineCode Calculator
// main resourse file

// Copyright (c) Robert Chen.
// Last Alter Time: 2020-03-22

#include <iostream>
#include "MachineLenth.h"
using namespace std;

int main()
{
	system("cls");
	int MachineLenth;
	cout << "\n***** ������������ Ver 1.0.0 *****" << endl;
	cout << "*                                *" << endl;
	cout << "*    ���� 1��    8λ �����ֳ�    *  " << endl;
	cout << "*                                *" << endl;
	cout << "*    ���� 2��   16λ �����ֳ�    *  " << endl;
	cout << "*                                *" << endl;
	cout << "*    ���� 3��   32λ �����ֳ�    *  " << endl;
	cout << "*                                *" << endl;
	cout << "*    ���� 4���˳�������������    *  " << endl;
	cout << "*                                *" << endl;
	cout << "**********************************" << endl;
	cout << "�� �����ֳ�����һλ����λ\n" << endl;
	cout << "�������������Ļ����ֳ��� ";
	cin >> MachineLenth;

	while (MachineLenth != 1 && MachineLenth != 2 && MachineLenth != 3 && MachineLenth != 4)
	{
		cin.clear();
		cin.ignore(100, '\n');
		system("cls");
		cout << "\n***** ������������ Ver 1.0.0 *****" << endl;
		cout << "*                                *" << endl;
		cout << "*    ���� 1��    8λ �����ֳ�    *  " << endl;
		cout << "*                                *" << endl;
		cout << "*    ���� 2��   16λ �����ֳ�    *  " << endl;
		cout << "*                                *" << endl;
		cout << "*    ���� 3��   32λ �����ֳ�    *  " << endl;
		cout << "*                                *" << endl;
		cout << "*    ���� 4���˳�������������    *  " << endl;
		cout << "*                                *" << endl;
		cout << "**********************************" << endl;
		cout << "�� �����ֳ�����һλ����λ\n" << endl;
		cout << "�������������Ļ����ֳ��� ";
		cin >> MachineLenth;
	}

	if (MachineLenth == 1)
	{
		Machinelenth8();
	}

	if (MachineLenth == 2)
	{
		Machinelenth16();
	}

	if (MachineLenth == 3)
	{
		Machinelenth32();
	}

	if (MachineLenth == 4)
	{
		exit(1);
	}

	return main();
}