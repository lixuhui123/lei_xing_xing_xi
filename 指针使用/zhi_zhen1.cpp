#include<stdio.h>
#include<stdlib.h>
#include<string>
int main()
{
#if 0
	int i=0;
	char str[1000];
	for (i = 0; i < 1000; i++)
	{
		str[i] = -1 - i;//str[255]
		//�����ǵ�i=����ʱ��ʹ��str[i]=0;str[i]��charֻ�ܴ洢һ���ֽ���ô1 0000 0000������0
		//1 0000 0000��ʮ��������256������strlen��255.
	}
	printf("%d\n", strlen(str));
	//�ӵ�һ���ַ���ʼ����\0������\0��Ӧ��ASCII��ֵ��0(�������ַ�����)���ҵ�0�����ҵ���\0
	//-1-255=-256
	//265  1 0000 0000
	//-256 1 0000 0000
#endif
	int a = 0x11223344;
	short int b = a;
	char c = a;
	printf("%x,%x,%x\n", a, b, c);
	printf("%d\n", sizeof(short int));//short int�����ֽ�
	system("pause");
	return 0;
}

