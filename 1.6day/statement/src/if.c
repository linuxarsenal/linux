#include <stdio.h>
#include <ctype.h>


int main()
{
	char ch;
	printf("please input one character:");
	scanf("%c",&ch);
	if(isalpha(ch))
		printf("You enter one alpha letter.\n");
	else if(islower(ch))
		printf("You enter one lowercase letter.\n");
	else if(issuper(ch))
		printf("You enter one supercase letter.\n");
	else if(isdigit(ch))
		printf("You enter one digit letter.\n");
	else if(ispunct(ch))
		printf("You enter one punctuation letter.\n");
	else if(isspace(ch))
		printf("You enter one whitespace letter.\n");
	else 
		printf("You enter ine unkown letter.\n");
	printf("tolower(%c):%c\n",
			ch,tolower(ch));
	printf("toupper(%c):%c\n",
			ch,toupper(ch));
	return 0;
}


