#include "STRING.h"
#include <iostream>

STRING::STRING() {
	this->length = 0;
	this->content = NULL;
}

STRING::STRING(const STRING& str) {
	this->length = str.length;
	this->content = new char[this->length + 1];
	for (int i = 0; i < this->length; i++) {
		this->content[i] = str.content[i];
	}
	this->content[this->length] = '\0';
}

STRING::STRING(const char* ch) {
	this->length = strlen(ch);
	this->content = new char[this->length + 1];
	for (int i = 0; i < this->length; i++) {
		this->content[i] = ch[i];
	}
	this->content[this->length] = '\0';
}

STRING::~STRING() {
	if (this->length > 0)
		delete[] this->content;
}

istream& operator>>(istream& is, STRING& str) {
	cout << "Nhap so luong ki tu cua chuoi: ";
	is >> str.length;
	str.content = new char[str.length + 1];
	for (int i = 0; i < str.length; i++) {
		is >> str.content[i];
	}
	return is;
}

ostream& operator<<(ostream& os, STRING& str) {
	for (int i = 0; i < str.length; i++) {
		os << str.content[i];
	}
	return os;
}

STRING STRING::operator+(STRING str) {
	int length = this->length;
	char* newstr = new char[this->length + str.length + 1];
	for (int i = 0; i < length; i++) {
		newstr[i] = this->content[i];
	}
	for (int i = 0; i < str.length; i++) {
		newstr[length + i] = str.content[i];
	}
	if (this->content != NULL) {
		delete[] this->content;
	}
	this->length = length + str.length;
	newstr[this->length] = '\0';
	this->content = newstr;
	return *this;
}

STRING& STRING::operator=(STRING str) {
	if (this->content != NULL) {
		delete[] this->content;
	}
	this->length = str.length;
	this->content = new char[this->length + 1];
	for (int i = 0; i < this->length; i++) {
		this->content[i] = str.content[i];
	}
	this->content[this->length] = '\0';
	return *this;
}

bool STRING::operator==(STRING str){
	if (this->length == str.length) {
		for (int i = 0; i < this->length; i++) {
			if (this->content[i] != str.content[i])
				return false;
		}
		return true;
	}
	return false;
}

bool STRING::operator!=(STRING str) {
	if (this->length == str.length) {
		for (int i = 0; i < this->length; i++) {
			if (this->content[i] != str.content[i])
				return true;
		}
		return false;
	}
	return true;
}