#include <stdio.h>

int main(int argc, char *argv[]) 
{
	if (argc < 3)
	{
		puts("Syntax error");
		return 0;
	}

	puts(argv[1]);
	puts(argv[2]);

	return 0;
}