#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i;
	printf("number\t\tsquare\t\tcube\n");
	for (i = 0; i <= 10; i++)
		printf("%d\t\t%d\t\t%d\n",i,i*i,i*i*i);
	system("pause");
	return 0;
}