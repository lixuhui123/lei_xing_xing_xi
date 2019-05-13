//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char a = 0x80;
//	unsigned int b = 0x80;
//	unsigned int c = a;
//	int d = a;
//	printf("%d\n", sizeof(unsigned int));//unsigned int 占四个字节
//	printf("a=%d,a=%u\n", a, a);
//	printf("b=%d,b=%u\n", b, b);
//	printf("c=%d,c=%u\n", c, c);//char 0x80 占一个字节，一个字节有符号输出时是-128-127，无符号是0-256
//	//所以有符号时是-128而不是128。
//	printf("d=%d,d=%u\n", d, d);
//	//00000000 00000000 00000000 00000010 2
//	//11111111 11111111 11111111 11111101 
//	//11111111 11111111 11111111 11111110 -2
//	//00000000 00000000 00000000 10000000 0x80
//	//11111111 11111111 11111111 01111111 
//	//11111111 11111111 11111111 10000000 0x-80
//		
//	system("pause");
//	return 0;
//}