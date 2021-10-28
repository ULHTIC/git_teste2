#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
	FILE *fp;
	if (argc < 4)
	{
		puts("Syntax error");
		return 0;
	}

	puts(argv[1]);
	puts(argv[2]);
	puts(argv[3]);

	puts("Vou tentar abrir os ficheiros");

	if (strcmp(argv[2], "r") == 0)
		fp = fopen(argv[1], "r");
	else
		fp = fopen(argv[1], "rb");

	puts("DEBUG... abri o ficheiro");

	if (fp == NULL)
	{
		puts("ERRO ao abrir o ficheiro");
		return 0;
	}

	fclose(fp);

	return 0;
}