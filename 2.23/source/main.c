#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c,x;
	scanf("%d%d%d",&a,&b,&c);
	
	
	if (a<b) {
		x = a; 
		a = b; 
		b = x;
	}
	if (a<c) {
		x = a;
		a = c;
		c = x;
	}
	if (b<c) {
		x = b;
		b = c; 
		c = x;
	}
	
	printf("�̤j�Ȭ�%d\n",a);
	printf("�̤p�Ȭ�%d\n",c);
	system("pause");
}
