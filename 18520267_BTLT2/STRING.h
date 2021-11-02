#ifndef STRING_h
#define STRING_h

#include <string>
#include "CHAR.h"

class STRING
{
private:
	CHAR* content;
	int length;

public:
	STRING();
	STRING(std::string);
	STRING(char);
	STRING(CHAR);
	~STRING();

	std::string getContent() const;

	STRING& expand(CHAR);
	STRING& expand(char);
	STRING& expand(std::string);
	STRING& expand(STRING);

	STRING& remove(CHAR);
	STRING& remove(char);

	void input();
};

#endif
