#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c, d,e;
	int total,money;

	printf("�п�J�C�Ѧ�p���{:");
	scanf("%d",&a);
	printf("�п�J�C�[�ڨT�o������:");
	scanf("%d", &b);
	printf("�п�J�C�[�ڨT�o��p���{��:");
	scanf("%d", &c);
	printf("�п�J�C�Ѫ������O:");
	scanf("%d", &d);
	printf("�п�J�C�Ѫ��L���O:");
	scanf("%d", &e);
	total = a*b/c+d+e;
	
	printf("�z�C��}�����O�ά�:%d\n", total);
	money = total / 2;
	printf("�Y�z��@��B�ͦ@���i�H�٤U:%d��\n",money);
	system("pause");


}