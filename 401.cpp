#include<stdio.h>
#include<string.h>
#include<ctype.h>
const char* str = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
const char* ans[] = {" -- is not a palindrome.\n\n", " -- is a regular palindrome.\n\n", " -- is a mirrored string.\n\n", " -- is a mirrored palindrome.\n\n"};
char cmp(char a)
{
	int index;
	if(isalpha(a))
		index = a - 'A';
	else
		index = a - '1' + 26;
	return str[index];
}
int main()
{
	int len, i, flag1, flag2;
	char s[100] ;
	while(scanf("%s", s) != EOF)
	{
		len = strlen(s);
		flag1 = flag2 = 1;
		for(i = 0; i < (len + 1) / 2; i++)
		{
			if(s[i] != s[len - i - 1])
				flag1 = 0;
			if(cmp(s[i]) != s[len - i - 1])
				flag2 = 0;
		}
		printf("%s%s", s, ans[flag1 + flag2 * 2]);		
	}
	return 0;
} 
