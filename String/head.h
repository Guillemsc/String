#ifndef __Head__
#define __Head__
#include <string.h>


class String
{
private:
	char *string;
	void alloc(unsigned int length)
	{
		string = new char[length+1];
	}

public:
	// constructors---------
	String(){};
	String(const char* text) 
	{
		unsigned int size = strlen(text);
		alloc(strlen(text) + 1);
		strcpy_s(string, strlen(text) + 1, text);
	}

	// length--------------
	unsigned int length() const
	{
		return strlen(string);
	}

	// destructor----------
	~String()
	{
		delete string;
	};

	char* text()
	{
		return string;
	}
};


#endif