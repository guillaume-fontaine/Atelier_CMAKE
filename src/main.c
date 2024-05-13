#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"

int main(int argc, char *argv[])
{
	if (argc != 3 && argc != 4)
		printf("Erreur de parametres");
	char *op = argv[1];
	char *a = argv[2];
	double r = 0;
	if (argc == 3 && strcmp(op, "sqrt") == 0)
	{
		r = _sqrt(atof(a));
		printf("%lf", r);
		return 0;
	}
	else if (argc == 4)
	{
		char *b = argv[3];
		if (strcmp(op, "add") == 0)
		{
			r = _add(atof(a), atof(b));
			printf("%lf", r);
		}
		else if (strcmp(op, "sub") == 0)
		{
			r = _sub(atof(a), atof(b));
			printf("%lf", r);
		}
		else if (strcmp(op, "mul") == 0)
		{
			r = _mul(atof(a), atof(b));
			printf("%lf", r);
		}
		else if (strcmp(op, "div") == 0)
		{
			r = _div(atof(a), atof(b));
			printf("%lf", r);
		}
		else if (strcmp(op, "square") == 0)
		{
			r = _square(atof(a));
			printf("%lf", r);
		}
		else
			printf("Erreur de parametres");
	}
	else
		printf("Erreur de parametres");
	return 0;
}
