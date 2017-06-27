#pragma once 


class Timmer
{
private:
	int minutes, hours, seconds, count = 0, Hours;

public:
	Timmer();
	void SetPosition(int x, int y, int Time);
	void CallTimer();
	void UpdateTimer();

};