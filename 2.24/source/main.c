#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	scanf("%d",&a);
	if ((a % 2) == 0)
		printf("%d為偶數\n", a);
	else 
		printf("%d為奇數\n",a);
		system("pause");
}
