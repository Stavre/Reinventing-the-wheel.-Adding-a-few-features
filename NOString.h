#pragma once
#include<string>


class NOString : std::string {
private:
	std::string s;
public:
	NOString();
	NOString(std::string str);
	NOString(char* str);
	char& operator[] (size_t pos);
	//NOString& join(const NOString& str);
	NOString& lowercase(const NOString& str);
	NOString& uppercase(const NOString& str);
	NOString& replace(const NOString& str);
	std::vector<NOString> split(const NOString& separator);
	NOString& leftTrim(const NOString& str);
	NOString& rightTrim(const NOString& str);
	NOString& trim(const NOString& str);
	bool matchRegex(const NOString* regex);
};