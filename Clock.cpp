#include "Clock.h"
Time::Time(): hours(0),minutes(0), seconds(0){}

Time::Time(int hours, int minutes, int seconds): hours(hours),minutes(minutes), seconds(seconds){}

Time::Time(int seconds)
{
	hours = seconds / 3600;
	minutes = (seconds - hours * 3600) / 60;
	this->seconds = seconds - hours * 3600 - minutes * 60;
}

Time Time::operator+(const Time& other) const
{
	return Time(hours + other.hours, minutes + other.minutes, seconds + other.seconds);
}

Time Time::operator-(const Time& other) const
{
	return Time(hours - other.hours, minutes - other.minutes, seconds - other.seconds);
}

Time Time::operator/(const Time& other) const
{
	return Time(hours / other.hours, minutes / other.minutes, seconds / other.seconds);
}

Time Time::operator*(const Time& other) const
{
	return Time(hours * other.hours, minutes * other.minutes, seconds * other.seconds);
}

bool Time::operator>(const Time& other) const
{
	return (hours*3600 + minutes*60 + seconds > other.hours * 3600 + other.minutes * 60 + other.seconds);
}

bool Time::operator<(const Time& other)const
{
	return (hours * 3600 + minutes * 60 + seconds < other.hours * 3600 + other.minutes * 60 + other.seconds);
}

bool Time::operator==(const Time& other) const
{
	return (hours * 3600 + minutes * 60 + seconds == other.hours * 3600 + other.minutes * 60 + other.seconds);
}

bool Time::operator!=(const Time& other) const
{
	return (hours * 3600 + minutes * 60 + seconds != other.hours * 3600 + other.minutes * 60 + other.seconds);
}

bool Time::operator>=(const Time& other) const
{
	return (hours * 3600 + minutes * 60 + seconds >= other.hours * 3600 + other.minutes * 60 + other.seconds);
}

bool Time::operator<=(const Time& other) const
{
	return (hours * 3600 + minutes * 60 + seconds <= other.hours * 3600 + other.minutes * 60 + other.seconds);
}

void Time::print()
{
	cout << "h. " << hours << " m. " << minutes << " s. " << seconds << endl;

}

