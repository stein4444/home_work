#include "String.h"


String String::operator+(const String& str)const
{
	String res(*this);
	res += str;
	return res;
}

bool String::operator!=(const String& str)const
{
	return( strcmp (this->str, str.str) !=0);
}

bool String::operator==(const String& str)const
{
	return (strcmp(this->str,str.str)==0);
}

bool String::operator<(const String& str)const
{
	return (strcmp(this->str, str.str) < 0);
}

bool String::operator>(const String& str)const
{
	return (strcmp(this->str, str.str) > 0);
}

String String:: operator*(const String& str)const
{
	String res;
	for (int i = 0; i < this->length; i++) {
		for (int j = 0; j < str.length; j++) {
			if (this->str[i] == str.str[j])
			{
				res.IsAppend(this->str[i]);
			}
		}
	}
	return res;
}

void String::Print() const
{
	cout << str << endl;
}

void String::IsAppend(const char str)
{
	int size = this->length + 2;
	char* newStr = new char[size];
	if(this->str != nullptr)
	strcpy_s(newStr, size, this->str);
	
	newStr[size - 2] = str;
	newStr[size - 1] = '\0';
	delete[] this->str;
	this->str = newStr;
	this->length = size - 1;
}
