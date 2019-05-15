//#include<stdio.h>
//#include<stdlib.h>
//#include<string>
////用指针左旋字符串
//int main()
//{
//	char str[] = "abcdefg";
//	char zuoxuan[] = "0";
//	char *p = str;
//	char *q = zuoxuan;
//	int a = 0;//要左旋第几个
//	int b = strlen(str);//7
//	int i = 0;
//	int c = 0;
//	if (0 == a)
//	{
//		puts(str);
//	}
//	else
//	{
//	for (i = a - 1; i <= b; ++i)
//	{
//		*(q + c) = *(p + i);
//		++c;
//	}
//	for (i = 0; i < a - 1; ++i)
//	{
//		*(q + c - 1) = *(p + i);
//		++c;
//	}
//	*(q + c - 1) = '\0';
//	puts(zuoxuan);
//	printf("%c\n", *(p + 1));
//     }
//	system("pause");
//	return 0;
//}