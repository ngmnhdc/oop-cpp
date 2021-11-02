#include "STRING.h"
#include <iostream>
#include <string>

STRING::STRING()
{
	this->content = nullptr;
	this->length = 0;
}

STRING::STRING(std::string str)
{
	this->length = str.length();
	this->content = new CHAR[length+1];
	for (int i = 0; i < this->length; i++)
		this->content[i] = str[i];
}

STRING::STRING(char ch)
{
	this->length = 1;
	this->content = new CHAR[1];
	this->content[0] = CHAR(ch);
}

STRING::STRING(CHAR ch)
{
	this->length = 1;
	this->content = new CHAR[1];
	this->content[0] = CHAR(ch);
}

STRING::~STRING()
{
	if (this->content != NULL)
		delete[] this->content;
	this->content = nullptr;
	this->length = 0;
}

std::string STRING::getContent() const
{
	std::string str;
	for (int i = 0; i < this->length; i++)
		str.push_back(this->content[i].getContent());
	return str;
}

STRING& STRING::expand(CHAR ch)
{
	std::string str = this->getContent();
	str.push_back(ch.getContent());
	if (this->content != NULL)
		delete[] this->content;
	this->STRING::STRING(str);
	return *this;
}

STRING& STRING::expand(STRING str)
{
	std::string finalStr = this->getContent();
	finalStr.append(str.getContent());
	if (this->content != NULL)
		delete[] this->content;
	this->STRING::STRING(finalStr);
	return *this;
}

STRING& STRING::expand(char ch)
{
	std::string str = this->getContent();
	str.push_back(ch);
	if (this->content != NULL)
		delete[] this->content;
	this->STRING::STRING(str);
	return *this;
}

STRING& STRING::expand(std::string str)
{
	std::string finalStr = this->getContent();
	finalStr.append(str);
	if (this->content != NULL)
		delete[] this->content;
	this->STRING::STRING(finalStr);
	return *this;
}

STRING& STRING::remove(CHAR ch)
{
	std::string str;
	for (int i = 0; i < this->length; i++)
		if (this->content[i].getContent() != ch.getContent())
			str.push_back(this->content[i].getContent());
	this->STRING::STRING(str);
	return *this;
}

STRING& STRING::remove(char ch)
{
	std::string str;
	for (int i = 0; i < this->length; i++)
		if (this->content[i].getContent() != ch)
			str.push_back(this->content[i].getContent());
	this->STRING::STRING(str);
	return *this;
}

void STRING::input()
{
	std::string str;
	getline(std::cin, str);
	if (this->content != NULL)
		delete[] this->content;
	this->STRING::STRING(str);
}

//-----

//STRING::STRING() {
//	this->length = 0;
//	this->content = nullptr;
//}
//
//STRING::STRING(char _char) {
//	this->length = 1;
//	this->content = new CHAR[1];
//	this->content[0] = CHAR(_char);
//}
//
//STRING::STRING(string _str){
//	this->length = _str.length();
//	this->content = new CHAR[_str.length()];
//	for (int i = 0; i < this->length; i++)
//		this->content[i] = _str[i];
//}
//
//STRING::STRING(const CHAR& _char){
//	this->length = 1;
//	this->content = new CHAR[1];
//	this->content[0] = CHAR(_char);
//}
//
//STRING::STRING(const STRING& _string){
//	this->length = _string.length;
//	this->content = _string.content;
//}
//
//STRING::~STRING(){}
//
//void STRING::getContent() {
//	for (int i = 0; i < this->length; i++) {
//		this->content[i].getContent();
//	}
//}