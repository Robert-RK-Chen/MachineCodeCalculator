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
	cout << "\n***** 机器数计算器 Ver 1.0.0 *****" << endl;
	cout << "*                                *" << endl;
	cout << "*    输入 1：    8位 机器字长    *  " << endl;
	cout << "*                                *" << endl;
	cout << "*    输入 2：   16位 机器字长    *  " << endl;
	cout << "*                                *" << endl;
	cout << "*    输入 3：   32位 机器字长    *  " << endl;
	cout << "*                                *" << endl;
	cout << "*    输入 4：退出机器数计算器    *  " << endl;
	cout << "*                                *" << endl;
	cout << "**********************************" << endl;
	cout << "★ 机器字长包含一位符号位\n" << endl;
	cout << "请输入你想计算的机器字长： ";
	cin >> MachineLenth;

	while (MachineLenth != 1 && MachineLenth != 2 && MachineLenth != 3 && MachineLenth != 4)
	{
		cin.clear();
		cin.ignore(100, '\n');
		system("cls");
		cout << "\n***** 机器数计算器 Ver 1.0.0 *****" << endl;
		cout << "*                                *" << endl;
		cout << "*    输入 1：    8位 机器字长    *  " << endl;
		cout << "*                                *" << endl;
		cout << "*    输入 2：   16位 机器字长    *  " << endl;
		cout << "*                                *" << endl;
		cout << "*    输入 3：   32位 机器字长    *  " << endl;
		cout << "*                                *" << endl;
		cout << "*    输入 4：退出机器数计算器    *  " << endl;
		cout << "*                                *" << endl;
		cout << "**********************************" << endl;
		cout << "★ 机器字长包含一位符号位\n" << endl;
		cout << "请输入你想计算的机器字长： ";
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