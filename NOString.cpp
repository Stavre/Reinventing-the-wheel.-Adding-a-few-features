#include "NOString.h"
#include<vector>
NOString::NOString()
{
}

NOString::NOString(std::string str)
{
	this->s = str;
}

NOString::NOString(char* str)
{
	this->s = str;
}

char& NOString::operator[](size_t pos)
{
	int size = s.size();
	if (pos >= 0 && pos < size)
		return this->s[pos];
	if (pos <= -1 && pos >= size) {
		return this->s[size - pos];
	}
}

//NOString& NOString::join(const NOString& str)
//{
//	return this->s + str;
//}

NOString& NOString::lowercase(const NOString& str)
{
	// TODO: insert return statement here
}

NOString& NOString::uppercase(const NOString& str)
{
	// TODO: insert return statement here
}

NOString& NOString::replace(const NOString& str)
{
	// TODO: insert return statement here
}

std::vector<NOString> NOString::split(const NOString& separator)
{
	return std::vector<NOString>();
}

NOString& NOString::leftTrim(const NOString& str)
{
	// TODO: insert return statement here
}

NOString& NOString::rightTrim(const NOString& str)
{
	// TODO: insert return statement here
}

NOString& NOString::trim(const NOString& str)
{
	// TODO: insert return statement here
}

bool NOString::matchRegex(const NOString* regex)
{
	return false;
}
