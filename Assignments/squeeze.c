/****************************************************************************
				Program for squeeze
****************************************************************************/

#include<stdio.h>

void squeeze(char *s, char *w)
{
	char *temp;
	temp = s;
	while (*w != '\0')
	{
		while (*s != '\0')
		{
			if (*w == *s)
			{
				*s = '0';
			}
			s++;
		}
		w++;
		s = temp;
	}
}

int main()
{
	//char sent[128], word[32];
	int i = 0;
	int res = 0;
	char sent[] = "Dennis Ritchie";
	char word[] = "Linux";
	//printf("Enter the string1\n");
	//fgets(sent, 128, stdin);
	//printf("Enter the string2\n");
	//fgets(word, 32, stdin);
	squeeze(sent, word);
	while (sent[i] != '\0')
	{
		if (sent[i] != '0')
		{
			printf("%c", sent[i]);
		}
		i++;
	}
	puts("");
}
