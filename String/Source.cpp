#include <iostream>
#include "head.h"

int main()
{
	String s1 = "hello";

	if (!strcmp(s1.text(), "hello"))
	{
		printf("hi");
	}
	getchar();
	return 0;
}