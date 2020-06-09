#pragma once
#include <iostream>
using namespace std;

class String
{
	char* str;	// динамічний масив символів
	int length;	// довжина рядка

public:
	String() : length(0) // ініціалізація
	{
		//length = 0;	// присвоєння
		str = nullptr;	// присвоєння
	}
	// size: 2 symb: '#' "##0"
	String(int count, char symb) : length(count)
	{
		str = new char[length + 1];
		for (int i = 0; i < length; i++)
		{
			str[i] = symb;
		}
		str[length] = 0;
	}
	String(const char* str)
	{
		length = strlen(str);
		this->str = new char[length + 1];
		strcpy_s(this->str, length + 1, str);
	}
	// copy constructor
	String(const String& other)
	{
		length = other.length;
		str = new char[length + 1];
		strcpy_s(str, length + 1, other.str);
	}

	~String()
	{
		delete[] str;
	}

	void operator+=(const String& str)
	{
		length = this->length + str.length;	
		char* newStr = new char[length + 1];

		strcpy_s(newStr, length + 1, this->str);
		strcat_s(newStr, length + 1, str.str);

		delete[] this->str;
		this->str = newStr;
	}
	String operator+(const String& str)const;
	bool operator!=(const String& str)const;
	bool operator==(const String& str)const;
	bool operator<(const String& str)const;
	bool operator>(const String& str)const;
	String operator*(const String& str)const;
	void Print() const;

	void Append(const char* str)
	{
		length = this->length + strlen(str);
		char* newStr = new char[length + 1];

		strcpy_s(newStr, length + 1, this->str);
		strcat_s(newStr, length + 1, str);

		delete[] this->str;
		this->str = newStr;
	}
	void IsAppend(const char str);
};