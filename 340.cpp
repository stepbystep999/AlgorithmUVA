#include<stdio.h>
#include<string.h>
#define MAXN 1010
int main()
{
	int num1[MAXN], num2[MAXN]; 
	int n0[10], n1[10], n2[10];
	int n, i, count0 = 0, count1, count2;
	while(scanf("%d", &n) != EOF && n != 0)
	{
		printf("Game %d:\n", ++count0);
		for(i = 0; i < n; i++)
			scanf("%d", &num1[i]);
		while(scanf("%d", &num2[0]) == 1 && num2[0] != 0)
		{
			for(i = 1; i < n; i++)
				scanf("%d", &num2[i]);
				count1 = 0;
			for(i = 0; i < n; i++)
				if(num1[i] == num2[i])
					count1++;
			memset(n0, 0, sizeof(n0));
			memset(n1, 0, sizeof(n1));
			memset(n2, 0, sizeof(n2));
			for(i = 0; i < n; i++)
			{
				n1[num1[i]]++;
				n2[num2[i]]++;
			}
			count2 = 0;
			for(i = 1; i <= 9; i++)
				count2 += n1[i] > n2[i] ? n2[i] : n1[i];
			count2 -= count1;		
			printf("    (%d,%d)\n", count1, count2);		
		}
		for(i = 1; i < n; i++)
			scanf("%d", &num2[i]);
	}
	return 0;
}
