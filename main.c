#include <stdio.h>
#define MAX 300

int main() 
{
	char string[MAX];
	char res[MAX];
	int len = 0;
	char temp = '\0';

	while(len < MAX)
	{
		scanf("%c", &temp);
		if (temp == '\n')
		{
			break;
		}
		string[len] = temp;
		len++;
	}

	for(int i = 0; i < len; i++)
	{
		res[i] = string[len-1-i];
	}
	for(int i = 0; i < len; i++)
	{
		printf("%c", res[i]);
	}
	printf("\n");
	return 0;
}
