#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c, d,e;
	int total,money;

	printf("請輸入每天行駛里程:");
	scanf("%d",&a);
	printf("請輸入每加侖汽油的價格:");
	scanf("%d", &b);
	printf("請輸入每加侖汽油行駛里程數:");
	scanf("%d", &c);
	printf("請輸入每天的停車費:");
	scanf("%d", &d);
	printf("請輸入每天的過路費:");
	scanf("%d", &e);
	total = a*b/c+d+e;
	
	printf("您每日開車的費用為:%d\n", total);
	money = total / 2;
	printf("若您找一位朋友共乘可以省下:%d元\n",money);
	system("pause");


}