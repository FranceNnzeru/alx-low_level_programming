#include <string.h>
#include "main.h"
#include <stdio.h>

int main()
{
	char *str = ")-1200(===''';      @$789-=-====      ";
	int i;
	int flag =  0;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (flag == 1 && str[i] < '0' &&  str[i] > '9')
			break;

		if (str[i] >= '0' &&  str[i] <= '9')
		{
			if (str[i - 1] == '-')
				printf("%c", str[i - 1]);
			printf("%c", str[i]);
			flag = 1;
		}
	}
	printf("\n");
	return  0;
}
