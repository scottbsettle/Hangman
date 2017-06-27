#include <iostream>
#include <iomanip>
#include <Windows.h>
#include "Console.h"
#include "Timer.h"
#include <ctime>
using  std::cout;
using  std::cin;
using  std::endl;
using std::setw;
using namespace System;

#define X 2
#define Y 0
Timmer::Timmer()
{
	minutes = 0, hours = 0, seconds = 0;
}
void Timmer::SetPosition(int x, int y, int Time)
{
	cout.fill('0');
	Console::SetCursorPosition(x, y);
	cout << setw(2) << Time;
}
void Timmer::CallTimer()
{
	while (true)
	{

		
		cout.fill('0');
		if (seconds == 60)
		{
			seconds = 0;
			Timmer::SetPosition(X + 6, Y, seconds);
			minutes++;
			Timmer::SetPosition(X + 3, Y, minutes);

		}
		if (minutes == 60)
		{
			minutes = 0;
			Timmer::SetPosition(X + 3, Y, minutes);
			hours++;
			Timmer::SetPosition(X, Y, hours);
		}
		if (count == 0)
		{
			Timmer::SetPosition(X, Y, hours);


			Console::SetCursorPosition(X + 2, 0);
			cout << ":";

			Timmer::SetPosition(X + 3, Y, minutes);


			Console::SetCursorPosition(X + 5, 0);
			cout << ":";
			Timmer::SetPosition(X + 6, Y, seconds);


			count++;
		}
		Sleep(1000);
		seconds++;
		Timmer::SetPosition(X + 6, Y, seconds);
	}
}

void Timmer::UpdateTimer()
{

}