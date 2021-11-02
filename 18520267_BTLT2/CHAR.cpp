#include "CHAR.h"
#include <cstddef>

CHAR::CHAR()
{
	this->content = NULL;
}

CHAR::CHAR(char ch)
{
	this->content = ch;
}

char CHAR::getContent() const
{
	return this->content;
}
