#include<stdio.h>
int main()
{
	int i;
	char c, a[] = {"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"};
	while((c = getchar()) != EOF)
	{
		for(i = 0; a[i] && a[i] != c; i++);
		if(a[i])
			putchar(a[i - 1]);
		else
			putchar(c);
	}
	return 0;
}
