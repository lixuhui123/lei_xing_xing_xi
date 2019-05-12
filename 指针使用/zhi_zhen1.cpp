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
		//含义是当i=？的时候使得str[i]=0;str[i]是char只能存储一个字节那么1 0000 0000，就是0
		//1 0000 0000的十进制数是256，所以strlen是255.
	}
	printf("%d\n", strlen(str));
	//从第一个字符开始到‘\0’结束\0对应的ASCII码值是0(本身是字符数组)，找到0就是找到了\0
	//-1-255=-256
	//265  1 0000 0000
	//-256 1 0000 0000
#endif
	int a = 0x11223344;
	short int b = a;
	char c = a;
	printf("%x,%x,%x\n", a, b, c);
	printf("%d\n", sizeof(short int));//short int两个字节
	system("pause");
	return 0;
}

