#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add_ies( char *words );
void add_es( char *words );
void add_s( char *words );

int main()
{
	char str[10];
	char quit[5] = "quit";

	//prints display
	printf("PLURAL STRINGS WRITTEN IN C\n");
	printf("This program was written by Sheila Li\n");
	while(1)
	{
		printf("\nEnter a noun: ");
		scanf("%s", str);

		//calculate the size of the word
		int size_str = strlen(str);

		if (strcmp(str, quit)==0)
		{
			return EXIT_FAILURE;
		}

		//checks if it ends in y
		if (str[size_str - 1] == 'y')
		{
			printf("The plural of %s", str);
			add_ies(str);
			printf(" is %s\n", str);
		}
		//checks if it ends in s
		else if (str[size_str - 1] == 's')
		{
			printf("The plural of %s", str);
        	        add_es(str);
        	        printf(" is %s\n", str);
		}
		//checks if it ends in ch or sh
		else if (size_str > 1 && str[size_str - 1] == 'h' && str[size_str - 2] == 'c' || size_str > 1 && str[size_str - 1] == 'h' && str[size_str - 2] == 's')
		{
			printf("The plural of %s", str);
	                add_es(str);
       		        printf(" is %s\n", str);
		}
		else
		{
			printf("The plural of %s", str);
	                add_s(str);
        	        printf(" is %s\n", str);
		}

	}
                return EXIT_SUCCESS;

}

void add_ies( char *words )
{
	int len = strlen(words);

	words[len - 1] = '\0';
	strcat(words, "ies");
}

void add_es( char *words )
{
        strcat(words, "es");
}

void  add_s( char *words )
{
	strcat(words, "s");
}
