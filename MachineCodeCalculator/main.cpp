// MachineCode Calculator
// main resourse file

// Copyright (c) Robert Chen.
// Last Alter Time: 2020-03-22

#include <iostream>
#include "MachineLength.h"
using namespace std;

int main()
{
	system("cls");
	int MachineLength;
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
	cin >> MachineLength;

	while (MachineLength != 1 && MachineLength != 2 && MachineLength != 3 && MachineLength != 4)
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
		cin >> MachineLength;
	}

	if (MachineLength == 1)
	{
		MachineLength8();
	}

	if (MachineLength == 2)
	{
		MachineLength16();
	}

	if (MachineLength == 3)
	{
		MachineLength32();
	}

	if (MachineLength == 4)
	{
		exit(1);
	}

	return main();
}