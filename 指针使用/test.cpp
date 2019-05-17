//#include<stdio.h>
//#include<stdlib.h>
//#include<string>
//int main()
//{
//	char str[] = "asdfgh";
//	char zuoxuan[] = "";
//	int a=strlen(str);//6
//	int b = 3;//指定要左旋第几个字符
//	int c = 0;
//	for (int i = b - 1; i <= a; ++i)
//	{
//		zuoxuan[c] = str[i];
//		++c;
//	}
//	for (int i = 0; i < b-1; ++i)
//	{
//		zuoxuan[c-1] = str[i];
//		++c;
//	}
//	zuoxuan[c-1] = '\0';//这个地方一定要注意字符串的结束标志。否则会访问越界
//	//puts(zuoxuan);
//	for (int i = 0; i <= strlen(zuoxuan); ++i)
//	{
//		printf("%c", zuoxuan[i]);
//	}
//	system("pause");
//	return 0;
//}