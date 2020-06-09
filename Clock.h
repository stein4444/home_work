#pragma once
#include<iostream>
using namespace std;

class Time {
private:
	int hours, minutes, seconds;

public:
	Time();
	Time(int hours, int minutes, int seconds);
	Time(int seconds);
	Time operator+ (const Time& other) const;
	Time operator- (const Time& other) const;
	Time operator/ (const Time& other) const;
	Time operator*(const Time& other) const;
	bool operator>(const Time& other)const;
	bool operator<(const Time& other)const;
	bool operator==(const Time& other)const;
	bool operator!=(const Time& other)const;
	bool operator>=(const Time& other)const;
	bool operator<=(const Time& other)const;
	void print();

};