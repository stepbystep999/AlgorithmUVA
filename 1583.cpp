#include<stdio.h>
#include<string.h>
#define MAXN 100001
int a[MAXN];
int main()
{
	int num, n, i, temp, digit;
	memset(a, 0, sizeof(a));
	for(i = MAXN - 1; i >= 1; i--)
	{
		temp = digit = i;
		while(digit > 0)
		{
			temp += digit % 10;
			digit /= 10; 		
		}
		if(temp < MAXN)
			a[temp] = i;
	}
	while(scanf("%d", &num) != EOF)
	{
		while(num--)
		{
			scanf("%d", &n);
			printf("%d\n", a[n]);
		}
	}
	return 0;
} 
