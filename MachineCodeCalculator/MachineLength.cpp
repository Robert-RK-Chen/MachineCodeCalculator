// MachineCode Calculator
// MachineLength resourse file

// Copyright (c) Robert Chen.
// Last Alter Time: 2020-03-22

#include <iostream>
#include <stack>
#include <math.h>
#include "MachineLength.h"
using namespace std;

void MachineLength8()
{
	stack<int> Code;
	int OCode[9] = { 0 };
	int RCode[9] = { 0 };
	int Complement[9] = { 0 };
	system("cls");
	int number, itr = 0;
	cout << "\n机器字长为：8\n\n请输入 -127 -> 127 内的整数：";
	cin >> number;
	while (number < -127 || number > 127)
	{
		cin.clear();
		cin.ignore(100, '\n');
		system("cls");
		cout << "\n机器字长为：8\n\n请输入 -127 -> 127 内的整数：";
		cin >> number;
	}
	cout << endl;
	int temp = abs(number);

	//用于计算原码
	while (temp != 0)
	{
		Code.push(temp % 2);
		temp = temp / 2;
	}
	while (Code.size() < 7)
	{
		Code.push(0);
	}

	if (number < 0)
	{
		Code.push(1);
	}
	else
	{
		Code.push(0);
	}
	while (!Code.empty())
	{
		OCode[itr++] = Code.top();
		Code.pop();
	}

	//用于输出原码
	cout << "☆ " << number << " 的 原码 是：";
	for (itr = 0; itr < 8; itr++)
	{
		cout << OCode[itr];
	}
	cout << "\n" << endl;

	//用于输出反码
	cout << "☆ " << number << " 的 反码 是：";
	if (number < 0)
	{
		RCode[0] = OCode[0];
		for (itr = 1; itr < 8; itr++)
		{
			if (OCode[itr] == 0)
			{
				RCode[itr] = 1;
			}
			else
			{
				RCode[itr] = 0;
			}
		}
	}
	else
	{
		for (itr = 0; itr < 8; itr++)
		{
			RCode[itr] = OCode[itr];
		}
	}

	for (itr = 0; itr < 8; itr++)
	{
		cout << RCode[itr];
	}
	cout << "\n" << endl;

	//用于输出补码
	cout << "☆ " << number << " 的 补码 是：";
	if (number < 0)
	{
		Complement[0] = OCode[0];
		int Carry = 1;
		for (itr = 7; itr > 0; itr--)
		{
			Complement[itr] = RCode[itr] + Carry;
			if (Complement[itr] == 2)
			{
				Complement[itr] = 0;
				Carry = 1;
			}
			else
			{
				Carry = 0;
			}
		}
	}
	else
	{
		for (itr = 0; itr < 8; itr++)
		{
			Complement[itr] = OCode[itr];
		}
	}

	for (itr = 0; itr < 8; itr++)
	{
		cout << Complement[itr];
	}
	cout << "\n" << endl;

	//用于输出移码
	cout << "☆ " << number << " 的 移码 是：";
	{
		if (Complement[0] == 0)
		{
			cout << 1;
		}
		else
		{
			cout << 0;
		}

		for (itr = 1; itr < 8; itr++)
		{
			cout << Complement[itr];
		}
		cout << "\n" << endl;
	}
	system("Pause");
}

void MachineLength16()
{
	stack<int> Code;
	int OCode[17] = { 0 };
	int RCode[17] = { 0 };
	int Complement[17] = { 0 };
	system("cls");
	int number, itr = 0;
	cout << "\n机器字长为：16\n\n请输入 -32767 -> 32767 内的整数：";
	cin >> number;
	while (number < -32767 || number > 32767)
	{
		cin.clear();
		cin.ignore(100, '\n');
		system("cls");
		cout << "\n机器字长为：16\n\n请输入 -32767 -> 32767 内的整数：";
		cin >> number;
	}
	cout << endl;
	int temp = abs(number);

	//用于计算原码
	while (temp != 0)
	{
		Code.push(temp % 2);
		temp = temp / 2;
	}
	while (Code.size() < 15)
	{
		Code.push(0);
	}

	if (number < 0)
	{
		Code.push(1);
	}
	else
	{
		Code.push(0);
	}
	while (!Code.empty())
	{
		OCode[itr++] = Code.top();
		Code.pop();
	}

	//用于输出原码
	cout << "☆ " << number << " 的 原码 是：";
	for (itr = 0; itr < 16; itr++)
	{
		cout << OCode[itr];
	}
	cout << "\n" << endl;

	//用于输出反码
	cout << "☆ " << number << " 的 反码 是：";
	if (number < 0)
	{
		RCode[0] = OCode[0];
		for (itr = 1; itr < 16; itr++)
		{
			if (OCode[itr] == 0)
			{
				RCode[itr] = 1;
			}
			else
			{
				RCode[itr] = 0;
			}
		}
	}
	else
	{
		for (itr = 0; itr < 16; itr++)
		{
			RCode[itr] = OCode[itr];
		}
	}

	for (itr = 0; itr < 16; itr++)
	{
		cout << RCode[itr];
	}
	cout << "\n" << endl;

	//用于输出补码
	cout << "☆ " << number << " 的 补码 是：";
	if (number < 0)
	{
		Complement[0] = OCode[0];
		int Carry = 1;
		for (itr = 15; itr > 0; itr--)
		{
			Complement[itr] = RCode[itr] + Carry;
			if (Complement[itr] == 2)
			{
				Complement[itr] = 0;
				Carry = 1;
			}
			else
			{
				Carry = 0;
			}
		}
	}
	else
	{
		for (itr = 0; itr < 16; itr++)
		{
			Complement[itr] = OCode[itr];
		}
	}

	for (itr = 0; itr < 16; itr++)
	{
		cout << Complement[itr];
	}
	cout << "\n" << endl;

	//用于输出移码
	cout << "☆ " << number << " 的 移码 是：";
	{
		if (Complement[0] == 0)
		{
			cout << 1;
		}
		else
		{
			cout << 0;
		}

		for (itr = 1; itr < 16; itr++)
		{
			cout << Complement[itr];
		}
		cout << "\n" << endl;
	}
	system("Pause");
}

void MachineLength32()
{
	stack<int> Code;
	int OCode[33] = { 0 };
	int RCode[33] = { 0 };
	int Complement[33] = { 0 };
	system("cls");
	int number, itr = 0;
	cout << "\n机器字长为：32\n\n请输入 -2147483647 -> 2147483647 内的整数：";
	cin >> number;
	while (number < -2147483647 || number > 2147483647)
	{
		cin.clear();
		cin.ignore(100, '\n');
		system("cls");
		cout << "\n机器字长为：32\n\n请输入 -2147483647 -> 2147483647 内的整数：";
		cin >> number;
	}
	cout << endl;
	int temp = abs(number);

	//用于计算原码
	while (temp != 0)
	{
		Code.push(temp % 2);
		temp = temp / 2;
	}
	while (Code.size() < 31)
	{
		Code.push(0);
	}

	if (number < 0)
	{
		Code.push(1);
	}
	else
	{
		Code.push(0);
	}
	while (!Code.empty())
	{
		OCode[itr++] = Code.top();
		Code.pop();
	}

	//用于输出原码
	cout << "☆ " << number << " 的 原码 是：";
	for (itr = 0; itr < 32; itr++)
	{
		cout << OCode[itr];
	}
	cout << "\n" << endl;

	//用于输出反码
	cout << "☆ " << number << " 的 反码 是：";
	if (number < 0)
	{
		RCode[0] = OCode[0];
		for (itr = 1; itr < 32; itr++)
		{
			if (OCode[itr] == 0)
			{
				RCode[itr] = 1;
			}
			else
			{
				RCode[itr] = 0;
			}
		}
	}
	else
	{
		for (itr = 0; itr < 32; itr++)
		{
			RCode[itr] = OCode[itr];
		}
	}

	for (itr = 0; itr < 32; itr++)
	{
		cout << RCode[itr];
	}
	cout << "\n" << endl;

	//用于输出补码
	cout << "☆ " << number << " 的 补码 是：";
	if (number < 0)
	{
		Complement[0] = OCode[0];
		int Carry = 1;
		for (itr = 31; itr > 0; itr--)
		{
			Complement[itr] = RCode[itr] + Carry;
			if (Complement[itr] == 2)
			{
				Complement[itr] = 0;
				Carry = 1;
			}
			else
			{
				Carry = 0;
			}
		}
	}
	else
	{
		for (itr = 0; itr < 32; itr++)
		{
			Complement[itr] = OCode[itr];
		}
	}

	for (itr = 0; itr < 32; itr++)
	{
		cout << Complement[itr];
	}
	cout << "\n" << endl;

	//用于输出移码
	cout << "☆ " << number << " 的 移码 是：";
	{
		if (Complement[0] == 0)
		{
			cout << 1;
		}
		else
		{
			cout << 0;
		}

		for (itr = 1; itr < 32; itr++)
		{
			cout << Complement[itr];
		}
		cout << "\n" << endl;
	}
	system("Pause");
}